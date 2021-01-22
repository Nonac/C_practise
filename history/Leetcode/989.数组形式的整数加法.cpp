//
// Created by Yang Yinan on 2021/01/22.
//

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        vector<int> k=int2Ventor(K);
        vector<int> revA=reverse(A);
        vector<int> result;
        bool flag= false;
        bool carry= false;
        int i;
        for(i = 0;true;i++){
            result.push_back(revA[i]+k[i]);
            if (carry){
                result[i]+=1;
                carry= false;
            }
            if (result[i]>9){
                carry= true;
                result[i]-=10;
            }
            if(i==k.size()-1){
                flag= true;
                break;
            }
            if(i==revA.size()-1){
                break;
            }
        }
        for(i+=1;i<max(k.size(),revA.size());i++){
            if(carry){
                result.push_back(flag?revA[i]+1:k[i]+1);
                carry= false;
                if(result[i]>9){
                    carry= true;
                    result[i]-=10;
                }
            }
            else{
                result.push_back(flag?revA[i]:k[i]);
            }
        }
        if(carry){
            result.push_back(1);
        }
        return reverse(result);
    }

    vector<int> int2Ventor(int k){
        vector<int> array;
        if(k==0){
            return array={0};
        }
        while(k){
            array.push_back(k%10);
            k/=10;
        }
        return array;
    }

    vector<int> reverse(vector<int>& array){
        vector<int> res;
        for(int i=array.size()-1;i>=0;i--){
            res.push_back(array[i]);
        }
        return res;
    }
};