class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp={
           {'b',0},{'a',0},{'l',0},{'o',0},{'n',0}
        };
        int n = text.size();
        vector<int>temp(5,0);
        for(char s : text){
            if(mp.find(s)!=mp.end()) mp[s]++;
        }

        for(auto &x : mp){
            if(x.first=='b') temp[0]=x.second;
            if(x.first=='a') temp[1]=x.second;
            if(x.first=='l') temp[2]=x.second;
            if(x.first=='o') temp[3]=x.second;
            if(x.first=='n') temp[4]=x.second;
        }
        temp[2] /=2;
        temp[3] /=2;
        int mn = INT_MAX;
        for(int i : temp) mn = min(mn,i);
        return mn;
    }
};