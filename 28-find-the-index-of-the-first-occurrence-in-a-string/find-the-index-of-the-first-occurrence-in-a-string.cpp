class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;

        int n = haystack.length();
        int m = needle.length();
        if (n < m) return -1;
        for (int i = 0; i <= haystack.length(); i++) {
            if (haystack.substr(i, m) == needle) {
                return i;  
            }
        }
        return -1;
    }
};
