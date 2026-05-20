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


    ListNode* findMid(ListNode* head){
        if(!head || !head->next) return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;


    }

    ListNode* reverse(ListNode* head){

        if(!head || !head->next){
            return head;
        }

        ListNode* ch = reverse(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next=NULL;
        return ch;



    }


    bool isPalindrome(ListNode* head) {
        ListNode* mid = findMid(head);
        ListNode* dusra = reverse(mid->next);
        ListNode* crr1 =head;
        while(dusra){
            if(crr1->val !=dusra->val) return false;
            crr1 = crr1->next;
            dusra = dusra->next;
        }
        return true;
    }
};