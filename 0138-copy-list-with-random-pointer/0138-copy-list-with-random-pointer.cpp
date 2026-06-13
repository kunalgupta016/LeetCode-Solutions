/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        // Insert Between 
        
        Node* temp = head;
        while(temp!=NULL){

            Node* newnode = new Node(temp->val);
            newnode->next = temp->next;
            temp->next = newnode;
            temp = temp->next->next;
        }


        // Random Pointers
        temp = head;
        while(temp!=NULL){
            Node* copyNode = temp->next;
            if(temp->random){

                copyNode->random =  temp->random->next;
            }else{

                copyNode->random =  nullptr;
            }

            temp = temp->next->next;

        }


        // Extract copy list
        temp = head;
        Node* dummyNode= new Node(-1);
        Node* res= dummyNode;
        while(temp){
            res->next = temp->next;
            res = res->next;
            temp->next = temp->next->next;
            temp = temp->next;
        }
        return dummyNode->next;



    }
};