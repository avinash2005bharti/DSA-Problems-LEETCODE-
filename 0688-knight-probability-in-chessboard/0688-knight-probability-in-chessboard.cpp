class Solution {
public:
     double dp[30][30][105];
    double f(int n, int i, int j , int k){
        if(i<0 || j<0 || i>=n|| j>=n) return 0;
        if(k==0) return 1;
        if(dp[i][j][k] >(-0.9)) return dp[i][j][k];
        double ans = 0.0;
         int dpx[8]={1,2,-1,-2,1,2,-1,-2};
         int dpy[8]={2,1,2,1,-2,-1,-2,-1};
        for(int p=0;p<8;p++){
            ans += f(n,i+dpx[p],j+dpy[p],k-1)*(0.125);
            dp[i][j][k]= ans;
        }
        return dp[i][j][k];
        
    }
    double knightProbability(int n, int k, int row, int column) {
        memset(dp,-1,sizeof dp);
        return f(n,row,column,k);
    }
};