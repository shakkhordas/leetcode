class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int zeroCount = 0;
        for (int i=0; i<arr.size(); i++) {
            if (arr[i] == 0)
                zeroCount++;
        }
        vector<int> temp;
        for (int i=0; i<arr.size(); i++) {
            if (temp.size() == arr.size()) break;
            temp.push_back(arr[i]);
            if (temp.size() == arr.size()) break;
            if (arr[i] == 0)
                temp.push_back(arr[i]);
        }
        arr.clear();
        for (int i=0; i<temp.size(); i++) arr.push_back(temp[i]);
    }
};
