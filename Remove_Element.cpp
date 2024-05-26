class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> rest;
        int idx = 0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i]!=val) {
                nums[idx] = nums[i];
                idx++;
                rest.push_back(nums[i]);
            }
        }
        return rest.size();
    }
};
