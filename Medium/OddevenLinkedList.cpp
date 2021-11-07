class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if (head == NULL) 
        {
            return head;
        }
        
        ListNode* oddHead = new ListNode(NULL, NULL);
        ListNode* evenHead = new ListNode(NULL, NULL);
        
        int id = 0;
        
        ListNode* temp = head;
        ListNode* temp1 = oddHead;
        ListNode* temp2 = evenHead;
            
        while(temp!=NULL) 
        {
            if(id == 0)
            {
                ListNode* node = new ListNode(temp->val);
                temp1->next = node;
                temp1 = temp1->next;
                temp=temp->next;
                id = 1;
            }
            else
            {
                ListNode* node = new ListNode(temp->val);
                temp2->next = node;
                temp2 = temp2->next;
                temp=temp->next;
                id = 0;
            }
        }
        evenHead= evenHead->next;
        
        while(evenHead!=NULL)
        {
            temp1->next = evenHead;
            temp1 = temp1->next;
            evenHead = evenHead->next;
        }
        
        return oddHead->next;
    }
};