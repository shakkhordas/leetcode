class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        int indexSum = INT_MAX;

        for (int i=0; i<list1.size(); i++) {
            auto f = find(list2.begin(), list2.end(), list1[i]);
            if (f != list2.end()) {
                int j = f - list2.begin();
                if (i + j > indexSum) continue;
                if (i + j < indexSum) {
                    indexSum = i + j;
                    if (!ans.empty()) ans.pop_back();
                }
                ans.push_back(list1[i]);
            }
        }

        return ans;
    }
};
