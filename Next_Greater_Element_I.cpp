class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1.size(), -1);
        stack<int> st;

        for (int i=0; i<nums2.size(); i++) {
            int cur = nums2[i];
            while (!st.empty() and cur > st.top()) {
                int val = st.top();
                st.pop();
                // find index
                auto it = find(nums1.begin(), nums1.end(), val);
                int idx = it - nums1.begin();
                res[idx] = cur;
            }

            auto ft = find(nums1.begin(), nums1.end(), cur);
            if (ft != nums1.end()) st.push(cur);
        }

        return res;
    }
};
