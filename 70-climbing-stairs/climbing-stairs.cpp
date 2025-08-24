class Solution {
public:
    int climbStairs(int n) {
        int c;
        if(n==0 || n==1) return 1;
        int left=1;
        int right=1;
        for(int i=2;i<=n;i++){
            c=left+right;
            right=left;
            left=c;
        }
        return c;
    }
};