class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int CURRENT_LEN = 1, MAX_LEN = 1;

        for (int i=1; i<nums.size(); i++) {
            if (nums[i] > nums[i-1])
                CURRENT_LEN++;
            else {
                if (CURRENT_LEN > MAX_LEN)
                    MAX_LEN = CURRENT_LEN;
                CURRENT_LEN = 1;
            }
        }

        if (CURRENT_LEN > MAX_LEN)
            MAX_LEN = CURRENT_LEN;

        return MAX_LEN;
    }
};
