class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;

        if (nums.size() == 0) return ans;

        string res = "";
        int st = 0, en = 0;

        for (int i=0; i<nums.size()-1; i++) {
            if (nums[i+1]-1>nums[i]) {
                if (st == en) res += to_string(nums[st]);
                else {
                    res += to_string(nums[st]);
                    res += "->";
                    res += to_string(nums[en]);
                }
                ans.push_back(res);
                res = "";
                st = i+1;
                en = i+1;
            }
            else
                en++;
        }

        res = "";
        if (st < nums.size() and en < nums.size() ) {
            if (st == en) res += to_string(nums[st]);
            else {
                res += to_string(nums[st]);
                res += "->";
                res += to_string(nums[en]);
            }
            ans.push_back(res);
        }

        return ans;
    }
};
