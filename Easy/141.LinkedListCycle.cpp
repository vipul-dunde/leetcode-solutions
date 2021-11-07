class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        unordered_map<ListNode*, int> hashMap;
        
        ListNode* temp = head;
       
        while(temp!=NULL) 
        {
            hashMap[temp]++;
            if(hashMap[temp]>1) {
                return true;
            }
            temp=temp->next;
        }
        
        
        return false;
    }
};