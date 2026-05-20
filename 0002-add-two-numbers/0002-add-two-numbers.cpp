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

    // ListNode* reverse(ListNode* head){
    //     if(!head || !head->next) return head;
    //     ListNode* crr = head;
    //     ListNode* pre = NULL;
    //     ListNode* temp = c->next;
    //     while(temp!=NULL){
    //         crr->next = pre;
    //         pre = crr;
    //         crr = temp;
    //         temp = crr->next;
    //     }
    //     crr->next = pre;
    //     return crr;
    // }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        

        ListNode* crr1 = l1;
        ListNode* crr2 = l2;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;
        int carry = 0;

        while(crr1!=NULL || crr2!=NULL || carry!=0){

            int sum = 0;
            if(crr1!=NULL){
                sum+=crr1->val;
                crr1 = crr1->next;
            }
            if(crr2!=NULL){
                sum+=crr2->val;
                crr2 = crr2->next;
            }
            sum+=carry;
            carry = sum/10;
            ListNode* newnode = new ListNode(sum%10);
            temp->next = newnode;
            temp = temp->next;

        }

        return dummyNode->next;



    }
};