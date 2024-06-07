class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;
        for (auto i: nums) s.insert(i);

        if (s.size() == nums.size()) return false;

        pair<int, int> p[nums.size()];

        for (int i=0; i<nums.size(); i++) p[i] = make_pair(nums[i], i);

        sort(p, p+nums.size());

        // for (int i=0; i<nums.size(); i++) cout << p[i].first << " " << p[i].second << endl;

        int flag = 0;
        for (int i=0; i<nums.size()-1; i++) {
            if (p[i].first == p[i+1].first && abs(p[i].second-p[i+1].second)<=k) {
                flag = 1;
                break;
            }
        }

        if (flag) return true;


        return false;

    }
};
