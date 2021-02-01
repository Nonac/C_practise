class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sub=(accumulate(A.begin(),A.end(),0)-accumulate(B.begin(),B.end(),0))/2;
        unordered_set<int> hash(A.begin(), A.end());
        vector<int> ans;
        for (auto& y : B) {
            int x = y + sub;
            if (hash.count(x)) {
                ans = vector<int>{x, y};
                break;
            }
        }
        return ans;
    }
};
