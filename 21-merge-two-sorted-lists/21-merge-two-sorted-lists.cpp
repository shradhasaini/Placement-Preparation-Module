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
    ListNode* mergeTwoLists(ListNode* L1, ListNode* L2) {
        
        if(L1 ==NULL)  return L2;
        if(L2==NULL)   return L1;
        if(L1-> val > L2-> val) std:: swap(L1, L2);
        ListNode* res =L1;
        while(L1!=NULL && L2!=NULL)
        {
            ListNode* temp = NULL;
            while(L1 !=NULL && L1->val<=L2->val){
                temp = L1;
                L1= L1->next;
    }
            temp-> next=L2;
            std:: swap(L1,L2);
    }
        return res;
    }
};