Time Complexity: O(n)
Space Complexity: O(1)
​
Solution 2: Recursion
```
class Solution {
public:
ListNode* reverseList(ListNode* head) {
if (head == nullptr || head->next == nullptr) {
return head;
}
ListNode* p = reverseList(head->next);
head->next->next = head;
head->next = nullptr;
return p;
}
};
```
Time Complexity: O(n)
Space Complexity: O(n)