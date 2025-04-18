class Solution {
public:
    bool isNumber(const string& s) {
        if (s[0] == '-') return true;
        auto it = s.begin();
        while (it != s.end() && isdigit(*it)) ++it;
        return !s.empty() && it == s.end();
    }
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        for (string operation : operations) {
            int scores_len = scores.size();

            if (isNumber(operation)) scores.push_back(stoi(operation));

            else if (operation == "C") {
                if (scores_len > 0) scores.pop_back();
            }

            else if (operation == "D") {
                if (scores_len > 0) {
                    int score = scores[scores_len - 1];
                    scores.push_back(score * 2);
                }
            }

            else {
                if (scores_len > 1) {
                    int score1 = scores[scores_len - 1], score2 = scores[scores_len - 2];
                    scores.push_back(score1 + score2);
                }
            }
        }

        int ans = 0;

        for (int score : scores) {
            cout << score << " ";
            ans += score;
        }
        cout << endl;


        return ans;
    }
};
