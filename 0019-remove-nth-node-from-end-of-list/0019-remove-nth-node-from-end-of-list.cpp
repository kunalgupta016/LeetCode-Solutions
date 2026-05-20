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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;
        while(temp!=nullptr){
            size++;
            temp = temp->next;
        }
        n = size-n+1;
        if(n==1){
            ListNode* todelete = head;
            head = head->next;
            delete todelete;
            return head;
        }
        temp = head;
        int cnt = 1;
        while(cnt<n-1){
            temp = temp->next;
            cnt++;
            
        }
        ListNode* todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
        return head;
    }
};