class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0;
        vector<int> sum;
        if(nums.size()==0){
            return -1;
        }
        for(int i=0;i<nums.size();i++){
            sum.push_back(left);
            left+=nums[i]; 
        }
        for(int i=0;i<nums.size();i++){
            if((sum[i]*2)==(left-nums[i])){
                return i;
            }
        }
        return -1;
    }
};
