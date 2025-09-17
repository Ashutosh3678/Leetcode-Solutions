class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<int>dp(text1.length(),0);
        int longest=0;
        for(char c:text2){
            int currlength=0;
            for(int i=0;i<dp.size();i++){
                if(currlength<dp[i]){
                    currlength=dp[i];
                }
                else if(c==text1[i]){
                    dp[i]=currlength+1;
                    longest=max(longest,currlength+1);
                }
            }
        }
        return longest;
    }
};