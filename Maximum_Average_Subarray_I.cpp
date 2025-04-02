class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxSum = 0, currentSum = 0;
        for (int i=0; i<k; i++) {
            maxSum += nums[i];
            currentSum += nums[i];
        }

        for (int i=0; i<nums.size()-k; i++) {
            currentSum += nums[i+k] - nums[i];
            maxSum = max(maxSum, currentSum);
        }

        return maxSum/k;
    }
};
