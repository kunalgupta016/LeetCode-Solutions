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
    ListNode* reverseList(ListNode* head) {

        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* c = head;
        ListNode* p = NULL;
        ListNode* f = c->next;
        while(f!=NULL){
            c->next = p;
            p = c;
            c = f;
            f = c->next;
        }
        c->next = p;
        return c;
    }
};