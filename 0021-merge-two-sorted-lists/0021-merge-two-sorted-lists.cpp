class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        ListNode* head;

        // Head decide karo
        if (list1->val <= list2->val) {
            head = list1;
            list1 = list1->next;
        }
        else {
            head = list2;
            list2 = list2->next;
        }

        ListNode* prev = head;

        while (list1 != NULL && list2 != NULL) {

            if (list1->val <= list2->val) {
                prev->next = list1;
                list1 = list1->next;
            }
            else {
                prev->next = list2;
                list2 = list2->next;
            }

            prev = prev->next;
        }

        if (list1 != NULL)
            prev->next = list1;
        else
            prev->next = list2;

        return head;
    }
};