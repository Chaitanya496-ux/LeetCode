class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();

        // Selection Sort
        for (int i = 0; i < n - 1; i++) {
            int SI = i;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[SI]) {
                    SI = j;
                }
            }
            swap(nums[i], nums[SI]);
        }

        int max_product = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int min_product = nums[0] * nums[1] * nums[n - 1];

        return max(max_product, min_product);
    }
};