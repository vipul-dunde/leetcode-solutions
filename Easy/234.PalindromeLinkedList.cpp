class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        int lenLL = 0; 
        ListNode* temp = head;
        
        while(temp!=NULL) 
        {
            lenLL++;
            temp = temp->next;
        }
        
        temp = head;
        
        stack<int> stackDS;
        
        for(int i=0; i<lenLL/2; i++) 
        {
            stackDS.push(temp->val);
            temp = temp->next;
        }
        
        if(lenLL%2!=0) {
            temp = temp->next;
            for(int i=(lenLL/2)+1; i<lenLL; i++) 
            {
                if(stackDS.top()!=temp->val){
                    return false;
                }
                stackDS.pop();
                temp = temp->next;
                if(temp==NULL){
                    break;
                }
            }
        }else{
            for(int i=lenLL/2; i<lenLL; i++) 
            {
                if(stackDS.top()!=temp->val){
                    return false;
                }
                stackDS.pop();
                temp = temp->next;
                if(temp==NULL){
                    break;
                }
            }
        }
        return true;
    }
};