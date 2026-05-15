class Solution {
public:
    int findMin(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int x : nums) pq.push(x);
        return pq.top();
    }
};