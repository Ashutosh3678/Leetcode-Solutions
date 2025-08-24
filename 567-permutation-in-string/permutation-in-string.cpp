class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int f[26] = {0};
        for (int i = 0; i < s1.length(); i++) {
            f[s1[i] - 'a']++;
        }

        int windowidx = 0;
        int windf[26] = {0};
        
      
        for (int i = 0; i < s2.length(); i++) {
            windf[s2[i] - 'a']++;  
            windowidx++;
            if (windowidx == s1.length()) {
                if (issame(f, windf)) {
                    return true;
                } 
                windf[s2[i - s1.length() + 1] - 'a']--;
                windowidx--;
            }
        }

        return false;
    }

    bool issame(int f[26], int windf[26]) {
        for (int i = 0; i < 26; i++) {
            if (f[i] != windf[i]) {
                return false;
            }
        }
        return true;
    }
};
