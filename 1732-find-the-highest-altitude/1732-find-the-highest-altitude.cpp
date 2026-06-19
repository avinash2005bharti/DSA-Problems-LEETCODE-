class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        if(n==1) {
            if(gain[0]<0) return 0;
            else return gain[0];
        }
        int mxht = 0;
        int ht = 0;
        for(int i : gain){
          ht = ht+i;
          cout<<ht<<" ";
          mxht = max(ht,mxht);
        }
       return mxht;
    }
};