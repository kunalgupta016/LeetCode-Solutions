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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode* dummy_node = new  ListNode(-1);
       ListNode* temp = dummy_node;
       ListNode* crr1 = list1;
       ListNode* crr2 = list2;
       while(crr1!=nullptr  && crr2!=nullptr ){
        if(crr1->val < crr2->val){
            temp->next = crr1;
            crr1 = crr1->next;
        }
        else{
            temp->next = crr2;
            crr2= crr2->next;
        }
        temp = temp->next;
       }

       if(crr1!=nullptr ){
            temp->next = crr1;
            crr1 = crr1->next;
       }
       if(crr2!=nullptr ){
        temp->next = crr2;
        crr2 = crr2->next;
       }
       
        
       

        return dummy_node->next;


    }
};