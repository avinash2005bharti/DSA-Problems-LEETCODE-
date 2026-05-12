class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        typedef pair<int,int>pi;
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i:nums) mp[i]++;
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        for(auto x: mp){
            int ele = x.first;
            int freq = x.second;
            pq.push({freq,ele});
            if(pq.size()>k) pq.pop();
        }
        while(pq.size()>0){
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;
    }
};