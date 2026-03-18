class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); ++i){

            if (i > 0 && nums[i] == nums[i - 1]){
                continue;
            }

            int j = i + 1;
            int k = nums.size() - 1;

            if (nums[i] > 0){
                break;
            }

            while (j < k){
                int sum = nums[j] + nums[k];
                int target = 0 - nums[i];

                if (sum > target){
                    --k;
                }
                else if (sum < target){
                    ++j;
                }
                else{
                    res.push_back({nums[i], nums[j], nums[k]});

                    ++j;

                    while (nums[j] == nums[j - 1] && j < k){
                        ++j;
                    }
                }


            }
        }

        return res;
    }
};