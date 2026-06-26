class Solution {
public:
    bool isPalindrome(int n) {
        long long rev=0,rem,x=n;
        while(n!=0){
            if(n<=0) return false;
            rem = n%10;
            rev = rev*10+rem;
            n=n/10;
        }
        if(x==rev)return true;
        return false;
    }
};