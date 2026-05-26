class Solution {
public:
    int numberOfSpecialChars(string word) {
         unordered_set<char>mp;
        int cnt = 0;
        for(char x : word) mp.insert(x);
         for(char x : mp){
            if(mp.find(x+32)!=mp.end()) cnt++;
         }
         return cnt;
    }
};