class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0, carry = 0;
        ListNode* crr1 = l1;
        ListNode* crr2 = l2;
        ListNode* prev = nullptr; 
        while (crr1 != NULL && crr2 != NULL) {
            sum = crr1->val + crr2->val + carry;
            carry = sum / 10;
            crr1->val = sum % 10;

            prev = crr1;
            crr1 = crr1->next;
            crr2 = crr2->next;
        }

        
        if (crr2 != NULL) {
            prev->next = crr2;  
            while (crr2 != NULL && carry) {
                sum = crr2->val + carry;
                carry = sum / 10;
                crr2->val = sum % 10;

                prev = crr2;
                crr2 = crr2->next;
            }
        }
        
        else if (crr1 != NULL) {
            while (crr1 != NULL && carry) {
                sum = crr1->val + carry;
                carry = sum / 10;
                crr1->val = sum % 10;

                prev = crr1;
                crr1 = crr1->next;
            }
        }

        
        if (carry) {
            prev->next = new ListNode(carry);
        }

        return l1;
    }
};
