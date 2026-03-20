/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
        ListNode dummy1(0);
        ListNode dummy2(0);

        ListNode* small = &dummy1;
        ListNode* large = &dummy2;

        while(head){
            ListNode* node = head->next;
            head->next = nullptr;
            if(head->val < x){
                small->next = head;
                small = small->next;
            }
            else{
                large->next = head;
                large = large->next;
            }
            head = node;

        }

        small->next = dummy2.next;
        return dummy1.next;

    }
};