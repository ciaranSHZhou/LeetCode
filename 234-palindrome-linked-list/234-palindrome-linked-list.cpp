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
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head;
        
        while (fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* reversed_second = reverseList(slow);
        
        ListNode* p1 = head;
        ListNode* p2 = reversed_second;
        
        while (p2->next != NULL){
            if (p2->val != p1->val)
                return false;
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
    
    ListNode* reverseList(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        
        while(curr){
            ListNode* next_temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_temp;
        }
        return prev;
    }
    
};