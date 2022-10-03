Solution: Space O(1)
​
* * Time Complexity: O(n)
*
* Space Complexity: O(1)
*
​
Solution: Stack
```
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
```
* * Time Complexity: O(n)
*
* Space Complexity: O(n)
*