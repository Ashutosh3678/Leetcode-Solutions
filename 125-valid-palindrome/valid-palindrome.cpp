class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(char ch:s){
            if(isalnum(ch))
            a+=tolower(ch);
        }
        string b=a;
        reverse(b.begin(),b.end());
        return a==b;
    }
};