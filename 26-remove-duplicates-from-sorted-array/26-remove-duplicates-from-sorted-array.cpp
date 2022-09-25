class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pre = 0, cur = 0;
        int size = nums.size();
        
        while (cur < size){
            if (nums[pre] == nums[cur])
                ++cur;
            else
                nums[++pre] = nums[cur++];
        }
        
        return (size == 0) ? 0 : (pre + 1);
    }
};