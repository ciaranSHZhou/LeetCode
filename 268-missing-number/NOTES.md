思路是既然0到n之间少了一个数，我们将这个少了一个数的数组 和 0到n之间完整的数组异或一下，那么相同的数字都变为0了，剩下的就是少了的那个数字了
TC: O(n)
SC: O(1)
​
​
Gauess
```
class Solution {
public:
int missingNumber(vector<int>& nums) {
int sum = 0;
for (int num : nums){
sum += num;
}
return nums.size() * (nums.size() + 1) * 0.5 - sum;
}
};
```
TC: O(n)
SC: O(1)