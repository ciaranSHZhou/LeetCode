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
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;

        // 1) Find middle (slow will point to middle for odd, first middle for even)
        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2) Split and reverse second half
        ListNode* second = slow->next;
        slow->next = nullptr;               // cut first half
        ListNode* prev = nullptr;
        ListNode* curr = second;
        while (curr) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        second = prev;                      // head of reversed second half

        // 3) Merge first and second alternately
        ListNode* first = head;
        while (second) {
            ListNode* fnext = first->next;
            ListNode* snext = second->next;

            first->next = second;
            second->next = fnext;

            first = fnext;
            second = snext;
        }
    }
};