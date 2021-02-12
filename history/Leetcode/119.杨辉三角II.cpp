class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0){
            vector<int> res;
            res.push_back(1);
            return res;
        }else{
            vector<int> res=getRow(rowIndex-1);
            int tmp1,tmp2;
            for(int i=1;i<res.size();i++){
                if(i==1){
                    tmp1=res[i-1];
                    tmp2=res[i];
                }
                res[i]=tmp1+tmp2;
                tmp1=tmp2;
                if(i!=res.size()-1){
                    tmp2=res[i+1];
                }
            }
            res.push_back(1);
            return res;
        }
    }
};
