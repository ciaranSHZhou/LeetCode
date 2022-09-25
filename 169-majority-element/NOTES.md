```
class Solution {
public:
int majorityElement(vector<int>& nums) {
unordered_map<int, double> m;
double size = nums.size();
for (int i = 0; i < nums.size(); ++i){
++m[nums[i]];
if (m[nums[i]] > size / 2)
return nums[i];
}
return -1;
}
};
```
Hashmap
TC: O(n)
SC: O(n)