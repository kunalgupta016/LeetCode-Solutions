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

   
    ListNode* reverse(ListNode* head, ListNode* temp){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* crr = head;
        ListNode* prev = NULL;
        ListNode* front = head;
        while(crr != temp){
            front = crr->next;
            crr->next = prev;
            prev = crr;
            crr = front;
        }
        
        crr->next = prev;
        return crr;   
    }

    
    ListNode* reverseTail(ListNode* crr, ListNode* temp){
        
        return temp;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left == right) return head;

        int cnt1 = 1, cnt2 = 1;
        ListNode* crr = head;
        ListNode* phle = NULL;
        ListNode* temp = head;
        ListNode* aage = NULL;

        
        while(cnt1 < left){
            phle = crr;
            crr = crr->next;
            cnt1++;
        }
        

        
        while(cnt2 < right){
            temp = temp->next;
            cnt2++;
        }

        aage = temp->next;

        
        ListNode* newHead = reverse(crr, temp);
        ListNode* newTail =crr;

        if(phle){
            phle->next = newHead;
        }
        else{
            head = newHead;
        }

        if(newTail){
            newTail->next = aage;
        }

        return head;
    }
};
