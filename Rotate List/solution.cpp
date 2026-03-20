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

    int length(ListNode* head){
        int cnt = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        
        int n = length(head);
        k = k%n;
        if(k==0){
            return head;
        }
        ListNode* temp = head;
        for(int i = 1;i<n-k;i++){
            temp = temp->next;
        }

        ListNode* tail = temp->next;
        temp->next = NULL;
        ListNode* newhead = tail;
        while(tail->next){
            tail = tail->next;
        }
        tail->next = head;
        
        return newhead;

    }
};