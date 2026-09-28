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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* i = l1;
        ListNode* j = l2;
        int carry = 0;
        ListNode* head = new ListNode(-1);
        ListNode* temp = head;
        while(i!=NULL || j!=NULL ||carry!=0){
            int sum = 0;
            if(i!=NULL){
                sum+=i->val;
                i = i->next;
            }

            if(j!=NULL){
                sum+=j->val;
                j = j->next;
            }

            sum+=carry;
            carry = sum/10;
            int val = sum%10;
            ListNode* newnode = new ListNode(val);
            temp->next = newnode;
            temp = temp->next;



        }
        return head->next;

    }
};