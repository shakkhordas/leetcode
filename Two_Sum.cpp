class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> elems;
        for (int i=0; i<nums.size(); i++) {
            int otherHalf = target - nums[i];
            if (elems.find(otherHalf) != elems.end())
                return {elems[otherHalf], i};
            elems[nums[i]] = i;
        }
        return {};
    }
};
