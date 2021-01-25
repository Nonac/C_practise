class Solution {
public:
    int bitwiseComplement(int N) {
        long int weight=1;
        int ans=0;
        do{
            int m=N%2;
            if(m==0){
                ans+=weight;
            }
            weight*=2;
            N=N/2;
        }while(N!=0);
        return ans;
    }
};
