class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp = nums[0];
        int t_index = 0;
        int count = 1;
        for (int i=1; i<nums.size(); i++) {
            if (nums[i]!=temp) {
                count++;
                nums[t_index+1] = nums[i];
                temp = nums[i];
                t_index = t_index+1;
            }
        }
        return count;
    }
};
