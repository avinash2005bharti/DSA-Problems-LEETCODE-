class Solution {
    vector<int> dp;

public:

    int ftd(vector<int>& arr, int i) {

        if(i >= arr.size()) return 0;

        if(dp[i] != -1) return dp[i];

        int robCurrent = arr[i] + ftd(arr, i + 2);

        int skipCurrent = ftd(arr, i + 1);

        return dp[i] = max(robCurrent, skipCurrent);
    }

    int rob(vector<int>& nums) {

        dp.resize(nums.size(), -1);

        return ftd(nums, 0);
    }
};