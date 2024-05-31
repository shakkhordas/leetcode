class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val = 0;
        for (int i=0; i<nums.size(); i++) {
            nums[i] = val ^ nums[i];
            val = nums[i];
        }
        return nums[nums.size()-1];
    }
};
