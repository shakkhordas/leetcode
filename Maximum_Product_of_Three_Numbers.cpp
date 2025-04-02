class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int sz = nums.size();

        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());

        return max(nums[0] * nums[1] * nums[2], nums[sz-1] * nums[sz-2] * nums[0]);
    }
};
