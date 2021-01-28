class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set;
        for (const int& num : nums) {
            num_set.insert(num);
        }

        int longestStreak = 0;

        for (const int& num : num_set) {
            if (!num_set.count(num - 1)) {
                int currentNum = num;
                int currentStreak = 1;

                while (num_set.count(currentNum + 1)) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }


    int longestConsecutiveBYsort(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int ans=0;
        int cnt=1;
        QuickSort(nums,0,nums.size()-1);
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int pre=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]-1==pre){
                cnt++;
                pre=nums[i];
            }else{
                ans=max(cnt,ans);
                cnt=1;
                pre=nums[i];
            }
        }
        return max(ans,cnt);
    }

    int Paritition1(vector<int>& A, int low, int high) {
        int pivot = A[low];
        while (low < high) {
            while (low < high && A[high] >= pivot) {
                --high;
            }
            A[low] = A[high];
            while (low < high && A[low] <= pivot) {
                ++low;
            }
            A[high] = A[low];
        }
        A[low] = pivot;
        return low;
    }

    void QuickSort(vector<int>& A, int low, int high)
    {
        if (low < high) {
            int pivot = Paritition1(A, low, high);
            QuickSort(A, low, pivot - 1);
            QuickSort(A, pivot + 1, high);
        }
    }

};
