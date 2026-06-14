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
       ListNode* crr = head;
       ListNode* prev = NULL;
       ListNode* front = NULL;
        while(crr!=NULL){
            front = crr->next;
            crr->next = prev;
            prev = crr;
            crr = front;
        }
        return prev;
    }


    int pairSum(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast  && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* first = head;
        ListNode* second = reverse(slow);

        int maxi = 0;
        while(first && second){
            int sum = first->val + second->val;
            maxi = max(maxi,sum);
            first = first->next;
            second = second->next;
        }

        return maxi;

    }
};