#define ll long long int
#define mod 1000000007

class Solution {
public:
    vector<vector<int>> dp;

    int f(int n, int k, int t) {
        if (n == 0 && t == 0) return 1;
        if (n == 0) return 0;

        if (dp[n][t] != -1) return dp[n][t];

        long long sum = 0;

        for (int v = 1; v <= k; v++) {
            if (t - v < 0) continue;

            sum = (sum + f(n - 1, k, t - v)) % mod;
        }

        return dp[n][t] = sum;
    }

    int numRollsToTarget(int n, int k, int target) {
        dp.assign(n + 1, vector<int>(target + 1, -1));
        return f(n, k, target);
    }
};