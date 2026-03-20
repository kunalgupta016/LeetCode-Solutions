class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if (!head || !head->next) return head;

        
        ListNode dummy(0, head);
        ListNode* pre = &dummy;   
        ListNode* slow = head;     

        while (slow) {
            ListNode* fast = slow->next; 
            bool isDup = false;
            while(fast && fast->val==slow->val){
                isDup = true;
                fast = fast->next;
            }
            if(isDup){
                pre->next = fast;
            }else{
                pre = slow;
            }
            slow = fast;
        }

        return dummy.next;
    }
};
