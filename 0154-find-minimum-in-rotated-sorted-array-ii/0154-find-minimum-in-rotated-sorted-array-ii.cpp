class Solution {
public:
    int findMin(vector<int>& nums) {
        int mn=INT_MAX;
        for(int x : nums) mn = min(x,mn) ;
        return mn;
    }
};