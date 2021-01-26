class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int couples[100]={0};
        int ans=0;
        for(auto domino:dominoes){
            domino[0]<domino[1]?couples[domino[0]*10+domino[1]]++:couples[domino[1]*10+domino[0]]++;
        }
        for(auto couple:couples){
            if(couple>=2){
                ans+=(couple*(couple-1)/2);
            }
        }
        return ans;
    }
};
