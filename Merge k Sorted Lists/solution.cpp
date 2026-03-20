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


class Compare {
public:
    // Comparator to order ListNode pointers based on node values
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
  
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,Compare> pq;
        for(auto i:lists){
            if(i){
                pq.push(i);
            }
        }
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        while(!pq.empty()){
            ListNode* smallest = pq.top();
            pq.pop();
            temp->next = smallest;
            temp = temp->next;
            if(smallest->next){
                pq.push(smallest->next);
            }
        }
        return dummy->next;      
    }
};