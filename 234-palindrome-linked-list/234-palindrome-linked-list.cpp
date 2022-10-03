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
        stack<int> stk;
        ListNode* curr = head;
        
        while (curr){
            stk.push(curr->val);
            curr = curr->next;
        }
        
        while(head){
            int num = stk.top();
            stk.pop();
            
            if (head->val != num)
                return false;
            
            head = head->next;
        }
        
       return true;
    }
};