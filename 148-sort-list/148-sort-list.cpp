class Solution {
private:
    ListNode* mergeList(ListNode* l1, ListNode* l2) {
        ListNode* node = new ListNode(-1);
        ListNode* head = node;
        while (l1 && l2) {
            if(l1->val<=l2->val) {
                node->next = l1;
                l1 = l1->next;
            }
            else if(l2-> val < l1->val) {
                node->next = l2;
                l2 = l2->next;
            }
            node = node->next;
        }
        while(l1) {
            node->next = l1;
            l1 = l1->next;
            node = node->next;
        }
        while (l2) {
            node->next = l2;
            l2 = l2->next;
            node = node->next;
        }
        return head->next;
    }
public:
    ListNode* sortList(ListNode* head) {

        if(head == NULL || head->next == NULL) return head;

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = head;
        while(fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next=nullptr;
        ListNode *l1 = sortList(head);
        ListNode *l2 = sortList(slow);

        return mergeList(l1, l2);
    }
};