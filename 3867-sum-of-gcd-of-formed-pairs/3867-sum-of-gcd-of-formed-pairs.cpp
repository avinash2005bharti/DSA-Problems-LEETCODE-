class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        vector<int> mx(n);
        vector<int> prefixGcd(n);

        mx[0] = nums[0];
        prefixGcd[0] = gcd(nums[0], mx[0]);

        for (int i = 1; i < n; i++) {
            mx[i] = max(mx[i - 1], nums[i]);
            prefixGcd[i] = gcd(nums[i], mx[i]);
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        long long sum = 0;

        for (int i = 0, j = n - 1; i < j; i++, j--) {
            sum += gcd(prefixGcd[i], prefixGcd[j]);
        }

        return sum;
    }
};