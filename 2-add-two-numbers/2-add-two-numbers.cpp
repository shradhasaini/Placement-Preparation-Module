class Solution 
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* newList = new ListNode(); //to return og node->next;
        ListNode* temp = newList;          //to store the return as temp for now
        
        int iCarry=0;
        
        // (if l1 not empty) || (l2 not empty ) || (there is not carry for further adding)
        while((l1!=NULL) || (l2!=NULL) || (iCarry!=0)) 
        {
            int iSum=0,iDigit=0;
            
            if(l1!=NULL)    // in case l1 ends before l2
            {
                iSum+=l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL)    // in case l2 ends before l1
            {
                iSum+=l2->val;
                l2 = l2->next;
            }
            if(iCarry!=0)    // when unadded val is available in carry but no more digit left
            {
                iSum+=iCarry;
            } 
                   
            // if 5 + 6 = 11 ie (10)+1 , carry keeps 10 as input;
            iCarry = iSum/10; 

            // if 5 + 6 = 11 ie 10+(1) , digit keeps 1 as input;
            iDigit = iSum%10;
            
             //Stores digit value in new node
            ListNode* newn = new ListNode(iDigit);
            temp->next = newn;
            temp = temp->next;
        }
        return newList->next;
    }
};