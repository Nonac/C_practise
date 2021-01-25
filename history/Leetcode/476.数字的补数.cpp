class Solution {
public:
    int findComplement(int num) {
        long int weight=1;
        int ans=0;
        do{
            int m=num%2;
            if(m==0){
                ans+=weight;
            }
            weight*=2;
            num=num/2;
        }while(num!=0);
        return ans;
    }
};
