class Solution {
public:
    bool checkRecord(string s) {
        int absentCount = 0, conLateCount = 1;

        for (int i=0; i<s.length(); i++) {
            if (s[i] == 'A') {
                absentCount++;
                if (absentCount > 1)
                    return false;
            }

            if (i>0 and s[i-1] == 'L' and s[i] == 'L') {
                conLateCount++;
                if (conLateCount > 2)
                    return false;
            }
            else {
                conLateCount = 1;
            }

        }

        return true;
    }
};
