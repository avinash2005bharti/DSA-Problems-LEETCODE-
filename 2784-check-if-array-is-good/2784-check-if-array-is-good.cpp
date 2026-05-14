class Solution {
public:
    bool isGood(vector<int>& arr) {
        unordered_map<int,int>mp;
        int cnt =0;
        int n = arr.size();
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            int cmax = arr[i];
            mx = max(cmax,mx);
        }
        if(mx>n) return false;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
      for(auto x : mp){
         if(x.first != mx){
            int temp = x.first;
            int freq = x.second;
            if(mp.find(temp)!=mp.end()){
                if(freq>1) return false;
            }
         }
      }
      if(mp.find(1)==mp.end()) return false;
      if(mp.find(mx)!=mp.end()){
        cnt = mp[mx];
      }
      return cnt==2;
    }
};