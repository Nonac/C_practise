class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int second[60]={0};
        int ans=0;
        for(auto element:time){
            second[element % 60]++;
        }
        for(int i=1;i<30;i++){
            ans+=(second[i]*second[60-i]);
        }
        if(second[0]){
            ans+=selfMulty(second[0]);
        }
        if(second[30]){
            ans+=selfMulty(second[30]);
        }
        return ans;
    }

    static int selfMulty(int n){
        return (n*(n-1)/2);
    }
};
