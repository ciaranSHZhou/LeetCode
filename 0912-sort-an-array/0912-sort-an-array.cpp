class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        ;
        vector<int> res(nums.size()), count(1000001);
        
        for (auto num : nums)
            ++count[num + 50000];
        
        int j = 0;
        for (int i = 0; i < count.size(); ++i){
            while (count[i]-- > 0)
                res[j++] = i - 50000;
        }
        return res;
    }
};