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
int getLength(ListNode* head){
        int cnt = 0;
        while(head!=NULL){
            cnt++;
            head=head->next;
        }
        return cnt;
    }


    ListNode* reverseKGroup(ListNode* head, int k) {

        int length = getLength(head);
        if(length<k){
            return head;
        }
        ListNode* prev = NULL;
        ListNode* crr = head;
        ListNode* front = NULL;
        int count= 0;
        while(crr!=NULL && count<k){
             front = crr->next;
             crr->next = prev;
             prev = crr;
             crr = front;
             count++;
        }
        if(front!=NULL){
            head->next = reverseKGroup(front, k);
        }
        return prev;

    }

    ListNode* swapPairs(ListNode* head) {
       
        return reverseKGroup(head,2);

        
    }
};