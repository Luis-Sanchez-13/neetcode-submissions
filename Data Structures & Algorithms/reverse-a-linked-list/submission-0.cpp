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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* new_head;
        if (curr == nullptr) {
            return nullptr;
        }
        if (curr->next == nullptr) {
            return curr;
        }
        

        new_head = reverseList(curr->next);
        curr->next->next = curr;
        curr->next = nullptr;
        return new_head;
        
    }
};
