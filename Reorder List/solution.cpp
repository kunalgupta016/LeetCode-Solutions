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
    void reorderList(ListNode* head) {
        stack<ListNode*> st;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* crr = slow->next;
        slow->next = NULL;
        ListNode* temp = head;
        while(crr){
            st.push(crr);
            crr=crr->next;
        }
        while(!st.empty()){
            ListNode* newnode = st.top();
            st.pop();
            newnode->next = temp->next;
            temp->next = newnode;
            temp = newnode->next;
            
        }
        
    }
};