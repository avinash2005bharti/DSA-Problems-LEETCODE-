class Solution {
public:
    bool isGood(vector<int>& arr) {
        int n = arr.size();
        vector<int> freq(n + 1, 0);

        int mx = *max_element(arr.begin(), arr.end());

        // Maximum element must be n-1
        if (mx != n - 1) return false;

        for (int x : arr) {
            if (x > n - 1) return false;
            freq[x]++;
        }

        // 1 to mx-1 should appear exactly once
        for (int i = 1; i < mx; i++) {
            if (freq[i] != 1) return false;
        }

        // Maximum element should appear twice
        return freq[mx] == 2;
    }
};