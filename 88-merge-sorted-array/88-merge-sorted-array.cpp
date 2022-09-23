class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int end = m + n - 1;
        int largest_1 = m - 1; int largest_2 = n - 1;
        
        while (largest_1 >= 0 && largest_2 >= 0){
            if (nums1[largest_1] >= nums2[largest_2]){
                nums1[end--] = nums1[largest_1--];
            }
            else{
                nums1[end--] = nums2[largest_2--];
            }

        }
        
        while (largest_2 >= 0){
            nums1[end--] = nums2[largest_2--];
        }
    }
};