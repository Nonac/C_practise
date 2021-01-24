class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int cnt=1,result=0;
        int pre=nums[0];
        for(auto num:nums){
            if(pre<num){
                cnt++;
            }else{
                cnt=1;
            }
            result=max(result,cnt);
            pre=num;
        }
        return result;
    }
};
