class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();

        int maxlength=1;
        int stindex=0;
    // every index can be initialization centre of palindrome
        for(int i=0;i<n;i++){
            // for odd length
            int left=i,right=i;
            while(left>=0 && right<n){
                if(s[left]==s[right]){
                    int currentlen=right-left+1;
                    if(maxlength<currentlen){
                        maxlength=currentlen;
                        stindex=left;
                    }
                }
                if(s[left]!=s[right]){
                   break; 
                }
                left--,right++;
            }
            // for even length
            int l=i,r=i+1;
              while(l>=0 && r<n){
                if(s[l]==s[r]){
                    int currentlen=r-l+1;
                    if(maxlength<currentlen){
                        maxlength=currentlen;
                        stindex=l;
                    }
                }
                if(s[l]!=s[r]){
                   break; 
                }
                l--,r++;
            }
            
        }
        return s.substr(stindex,maxlength);
    }
};