class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int i : nums)mn= min(mn,i);
        for(int i : nums)mx = max(mx,i);
        int res = gcd(mn,mx);
        return res;
    }
};