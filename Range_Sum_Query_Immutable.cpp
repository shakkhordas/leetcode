class NumArray {
public:
    vector<int> res;
    NumArray(vector<int>& nums) {
        for (int i=1; i<nums.size(); i++) nums[i] = nums[i] + nums[i-1];
        this->res = nums;
    }

    int sumRange(int left, int right) {
        if (left == 0) return res[right];
        return res[right] - res[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
