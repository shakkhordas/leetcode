class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long X = 0, Y = 0;

        for (int i=1; i<=nums.size(); i++) {
            X += nums[i-1] - i;
            Y += nums[i-1] * nums[i-1] - i * i;
        }

        int M = (Y - X * X) / (2 * X);
        int D = M + X;

        return {D, M};
    }
};
