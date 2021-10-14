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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int sum = 0;
        int carry = 0;
        
        vector<int > vect;
        
        while (l1!= NULL && l2!=NULL) {
        
            if(carry == 1)  {
                    sum = l1->val + l2->val + 1; 
 
                }
             else{
                    sum = l1->val + l2->val ; 
            }
            
                
            int ten = 10;
            if( sum >= ten) {
                sum = sum - ten;
                carry = 1;
                vect.push_back(sum);
            } else {
                carry = 0;
                vect.push_back(sum);
            }
            
            if(l1) {
                l1 = l1->next;
            }
            
            if(l2){
                l2 = l2->next;
            }
            
        }
        
            while(l1!= NULL)
            {
                if(carry == 1)  {
                    sum = l1->val + 1; 
 
                }
             else{
                    sum = l1->val ; 
            }
            
                
            int ten = 10;
            if( sum >= ten) {
                sum = sum - ten;
                carry = 1;
                vect.push_back(sum);
            } else {
                carry = 0;
                vect.push_back(sum);
            }
            
            if(l1) {
                l1 = l1->next;
            }
            }
        
            while(l2!= NULL)
            {
             if(carry == 1)  {
                    sum = l2->val + 1; 
 
                }
             else{
                    sum = l2->val ; 
            }
            
                
            int ten = 10;
            if( sum >= ten) {
                sum = sum - ten;
                carry = 1;
                vect.push_back(sum);
            } else {
                carry = 0;
                vect.push_back(sum);
            }
            
            if(l2) {
                l2 = l2->next;
            }   
            }
        
        if ( carry == 1) {
            vect.push_back(carry);
        }
        
        
        ListNode* head = NULL;
        ListNode* node = new ListNode(vect[0]);
        head = node;
        
        ListNode* temp = head;
        
        for ( int i=1; i<vect.size(); i++){
            temp->next = new ListNode(vect[i]);
            temp = temp->next;
        }
        
        
        return (head);
    }
};