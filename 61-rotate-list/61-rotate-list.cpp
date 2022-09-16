/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * 
*/
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr) return nullptr;
        list<ListNode*> l;
        ListNode* tmp = head;
        while (tmp != nullptr) {
            l.push_back(tmp);
            tmp = tmp->next;
        }
        
        // splice the list
        int idx = k % l.size();
        auto reverseStart = l.rbegin();
        while (idx--) ++reverseStart; 
        auto start = reverseStart.base();
        l.splice(l.begin(), l, start, l.end());
        
        // correct the "next" pointers
        ListNode* ans = l.front();
        tmp = l.front();
        for (auto it = l.begin(); it != l.end(); ++it) {
            if (it == l.end()) break;
            tmp->next = *it;
            tmp = tmp->next;
        }
        tmp->next = nullptr;
        return ans;
    }
};