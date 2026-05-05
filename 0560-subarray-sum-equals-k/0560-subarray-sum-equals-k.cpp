class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>pre(n,0);
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=arr[i]+pre[i-1];
        }
        unordered_map<int,int>mp;
        int cnt =0;
        for(int i=0;i<n;i++){
            if(pre[i]==k)cnt++;
            int rem = pre[i]-k;
            if(mp.find(rem)!=mp.end()) cnt += mp[rem];
            mp[pre[i]]++;
        }
      return cnt;
    }
};