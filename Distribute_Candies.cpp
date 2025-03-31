class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> u;

        for (int i: candyType) u.insert(i);

        return min(candyType.size()/2, u.size());
    }
};
