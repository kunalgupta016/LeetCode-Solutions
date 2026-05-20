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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* c = head;
        ListNode* p = NULL;
        while (c != NULL) {
            
            if (c->val == val) {
                
                if(p==NULL){
                    head = c->next;
                    c = c->next;
                }
                else{
                    p->next = c->next;
                    c = c->next;
                }


            } else {
                p = c;
                c = c->next;
            }
        }
        return head;
    }
};