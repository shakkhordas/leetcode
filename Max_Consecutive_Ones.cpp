class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0, tmp=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1)
                tmp++;
            else{
                if(tmp>ans)
                    ans=tmp;
                tmp=0;
            }
        }
        if(tmp>ans)
            ans=tmp;
        return ans;
    }
};
