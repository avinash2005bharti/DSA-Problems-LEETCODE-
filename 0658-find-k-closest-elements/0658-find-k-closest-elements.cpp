class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        typedef pair<int,int>pi;
        priority_queue<pi>pq;
        vector<int>ans;
        for(int ele: arr){
            int dis = abs(ele-x);
            pq.push({dis,ele});
            if(pq.size()>k) pq.pop();
        }
        while(pq.size()>0){
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};