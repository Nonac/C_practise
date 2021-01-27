#include <iostream>
#include <vector>

//1579. 保证图可完全遍历
using namespace std;
class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        vector<vector<int>> tree;
        vector<vector<int>> A,B;
        init(n,tree);
        int ans=0;
        for(auto edge:edges){
            if(edge[0]==3){
                merge(tree,edge[1]-1,edge[2]-1,ans);
            }
        }
        A=tree;
        B=tree;
        for(auto edge:edges){
            if(edge[0]==1){
                merge(A,edge[1]-1,edge[2]-1,ans);
            }
        }
        for(auto edge:edges){
            if(edge[0]==2){
                merge(B,edge[1]-1,edge[2]-1,ans);
            }
        }
        if(!check(A,B)){
            return -1;
        }
        return ans;
    }

    bool check(vector<vector<int>>&A,vector<vector<int>>&B){
        int x=find(A[0],0);
        int y=find(B[0],0);
        for(int i=1;i<A[0].size();i++){
            if((find(A[0],i)!=x)||(find(B[0],i)!=y)) {
                return false;
            }
        }
        return true;
    }

    int find(vector<int>& array,int n){
        if (array[n]==n){
            return n;
        }else{
            array[n]=find(array,array[n]);
            return array[n];
        }
    }

    void merge(vector<vector<int>>& tree,int n,int m,int &ans){
        int x=find(tree[0],n);
        int y=find(tree[0],m);
        if(x==y){
            ans++;
        }
        if(tree[1][x]<=tree[1][y]){
            tree[0][x]=y;
        }else{
            tree[0][y]=x;
        }
        if(tree[1][x]==(tree[1][y]&(x!=y))){
            tree[1][y]++;
        }
    }

    void init(int n,vector<vector<int>> & ans){
        vector<int> a,b;
        for(int j=0;j<n;j++){
            a.push_back(j);
            b.push_back(1);
        }
        ans.push_back(a);
        ans.push_back(a);
    }
};

int main()
{
    int n=4;
    int e[7][3]={{3,1,2},{3,2,3},{1,1,3},{1,2,4},{1,1,2},{2,3,4}};
    vector<vector<int>> edges;
    for(auto & i : e){
        vector<int> elemetn;
        for (int & j : i){
            elemetn.push_back(j);
        }
        edges.push_back(elemetn);
    }
    Solution solution=Solution();
    int a=solution.maxNumEdgesToRemove(4,edges);
    cout<<to_string(a)<<endl;
}
