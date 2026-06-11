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

    int findLength(ListNode* head){
        int cnt = 0;
        while(head){
            cnt++;
            head = head->next;
        }
        return cnt;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        int n = findLength(head);
        if(n<k) return head;

        ListNode* crr = head;
        ListNode* prev= NULL;
        ListNode* next= NULL;
        int cnt = 0;
        while(crr!=NULL && cnt<k){
            next = crr->next;
            crr->next = prev;
            prev = crr;
            crr = next;
            cnt++;
        }

        if(next){
            head->next = reverseKGroup(next,k);
        }
        return prev;



 
    }
};