class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        vector<pair<int, int> > pos;
        vector<string> ans(score.size(), "");

        for (int i=0; i<score.size(); i++)
            pos.push_back(make_pair(score[i], i));

        sort(pos.rbegin(), pos.rend());

        for (int i=0; i<pos.size(); i++) {
            switch(i) {
                case 0:
                    ans[pos[i].second] = "Gold Medal";
                    break;
                case 1:
                    ans[pos[i].second] = "Silver Medal";
                    break;
                case 2:
                    ans[pos[i].second] = "Bronze Medal";
                    break;
                default:
                    ans[pos[i].second] = to_string(i+1);
                    break;
            }
        }

        return ans;

    }
};
