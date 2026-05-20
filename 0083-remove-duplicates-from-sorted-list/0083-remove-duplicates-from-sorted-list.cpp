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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p = NULL;
        ListNode* crr = head;
        while(crr!=NULL){
            if(p==NULL){
                p = crr;
                crr = crr->next;
            }
            else if(p->val!=crr->val){
                p = crr;
                crr = crr->next;
            }else{
                ListNode* temp = crr;
                crr = crr->next;
                p->next = crr;
                delete temp;
            }
        }

        return head;


    }
};