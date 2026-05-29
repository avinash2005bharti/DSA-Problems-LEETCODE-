class Solution {
public:
    int minSum(int num){
        int sum = 0;
        while(num>0){
            sum += num%10;
            num /= 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int mn = INT_MAX;
        for(int i : nums){
            mn = min(mn,minSum(i));
        }
        return mn;
    }
};