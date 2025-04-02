class Solution {
public:
    bool judgeCircle(string moves) {
        int X = 0, Y = 0;

        for (char move : moves) {
            if (move == 'R') X++;
            else if (move == 'L') X--;
            else if (move == 'U') Y++;
            else Y--;
        }

        if (X == 0 && Y == 0) return true;

        return false;

    }
};
