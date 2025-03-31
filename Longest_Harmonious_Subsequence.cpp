class Solution {
public:
    int findLHS(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int l = 0, r = 1, res = 0;

        while (r < nums.size()) {
            int diff = abs(nums[r] - nums[l]);
            if (diff == 1) {
                res = max(res, r - l + 1);
                r++;
            }

            else if (diff < 1)
                r++;

            else
                l++;
        }

        return res;

    }
};
