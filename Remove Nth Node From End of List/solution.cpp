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

    ListNode* reverse(ListNode* &head){

        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* prev = nullptr;
        ListNode* crr = head;
        ListNode* front = crr->next;
        while(crr!=NULL){
            front = crr->next;
            crr->next = prev;
            prev = crr;
            crr = front;
        }
        return prev;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr){
            return head;
        }
        ListNode* reverseLL = reverse(head);
        int cnt = 1;
        ListNode* temp = reverseLL;
        ListNode* prev = nullptr;
        if(n == 1){
            reverseLL = reverseLL->next;
        }
        else{
            while(cnt < n){
                prev = temp;
                temp = temp->next;
                cnt++;
            }
            if(prev != NULL){
                prev->next = temp->next;
            }
        }
        ListNode* reverseL = reverse(reverseLL);
        return reverseL;
    }
};