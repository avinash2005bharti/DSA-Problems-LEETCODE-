class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        typedef pair<int,vector<int>>piv;
        priority_queue<piv>pq;
        vector<vector<int>>ans;
        for(vector<int>v:points){
            int x = v[0];
            int y = v[1];
            int dis = x*x + y*y;
            pq.push({dis,v});
            if(pq.size()>k) pq.pop();
        }
        while(pq.size()>0){
            vector<int> v = pq.top().second;
            ans.push_back(v);
            pq.pop();
        }
        return ans;
    }
};