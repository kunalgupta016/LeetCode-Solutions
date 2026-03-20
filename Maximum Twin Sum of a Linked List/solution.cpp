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
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* prev = NULL;
        ListNode* crr = head;
        ListNode* front = crr->next;
        while(crr!=NULL){
            front = crr->next;
            crr->next = prev;
            prev = crr;
            crr = front;
        }
        return  prev;
    }

    int pairSum(ListNode* head) {
        int sum = 0;
        int max = INT_MIN;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow = slow->next;   
        }

        ListNode* second = reverse(slow);
        ListNode* first = head;

        int maxSum = 0;
        while(second){
            sum = first->val + second->val;
            if(sum>maxSum){
                maxSum = sum;
            }
            first = first->next;
            second = second->next;
        }
        return maxSum;
        
    }
};