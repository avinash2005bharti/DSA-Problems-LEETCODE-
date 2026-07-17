class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        vector<int> cnt(mx + 1);
        for (int x : nums)
            cnt[x]++;

        vector<long long> exact(mx + 1);

        // exact[g] = number of pairs whose gcd is exactly g
        for (int g = mx; g >= 1; g--) {
            long long c = 0;

            for (int j = g; j <= mx; j += g)
                c += cnt[j];

            exact[g] = c * (c - 1) / 2;

            for (int j = g + g; j <= mx; j += g)
                exact[g] -= exact[j];
        }

        vector<long long> pref(mx + 1);
        for (int i = 1; i <= mx; i++)
            pref[i] = pref[i - 1] + exact[i];

        vector<int> ans;

        for (long long q : queries) {
            int l = 1, r = mx;
            while (l < r) {
                int mid = (l + r) / 2;
                if (pref[mid] > q)
                    r = mid;
                else
                    l = mid + 1;
            }
            ans.push_back(l);
        }

        return ans;
    }
};