class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            ostringstream ss;
            ss<<nums[i];
            string str=ss.str();
            if(str.length()%2==0)
                ans++;
        }
        return ans;
    }
};
