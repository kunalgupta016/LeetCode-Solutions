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

        ListNode* reverse(ListNode* head){
        ListNode* crr = head;
        ListNode* prev = nullptr;
        ListNode* front = crr->next;
        while(crr!=NULL){
            front = crr->next;
            crr->next = prev;
            prev = crr;
            crr = front;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast = fast->next;
            }
            slow = slow->next;
        }   
        ListNode* mid = slow;
        ListNode* crr2 = reverse(mid);
        ListNode* crr1 = head;
        while( crr2 ){
            if(crr1->val != crr2->val){
                return false;
            }
            else{
                crr1=crr1->next;
                crr2 = crr2->next;
            }
        }
        return true;
        
    }
};