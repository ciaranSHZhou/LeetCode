class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while (left < right){
            int currMax = (right - left) * min(height[left], height[right]);
            maxWater = max(maxWater, currMax);

            if (height[left] < height[right]){
                ++left;
            }
            else{
                --right;
            }
        }
        
        return maxWater;
    }
};