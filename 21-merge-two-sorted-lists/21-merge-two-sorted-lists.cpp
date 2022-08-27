class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result;
        
        // base cases.
        if(list1 == nullptr && list2 != nullptr) {
            return list2;
        }
        else if(list2 == nullptr && list1!=nullptr) {
            return list1;
        }
        else if(list1 == nullptr && list2 == nullptr) {
            return list1;
        }
        else {
                        
            // compute the starting node.
            if(list1->val <= list2->val) {
                result = list1;
                list1=list1->next;
            } else {
                result = list2;
                list2 = list2->next;
            }
            ListNode* head = result;
            
            
            while(list1!=nullptr && list2!= nullptr) {
                if(list1->val <= list2->val) {
                    result->next = list1;
                    list1 = list1->next;
                } else {
                    result->next = list2;
                    list2 = list2->next;
                }
                result = result->next;
            }
            
            if(list1!= nullptr) {
                result->next = list1;
            }
            if(list2!= nullptr) {
                result->next=list2;
            }
            
            return head;
        }
    }
};