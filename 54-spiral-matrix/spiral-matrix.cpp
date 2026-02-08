class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int> r;
        int t = 0;
        int b = m.size() - 1;
        int l = 0;
        int ri = m[0].size() - 1;
        while (t <= b && l <= ri) {
            for (int i = l; i <= ri; i++)
                r.push_back(m[t][i]);
            t++;
            for (int i = t; i <= b; i++)
                r.push_back(m[i][ri]);
            ri--;
            if (t <= b) {
                for (int i = ri; i >= l; i--)
                    r.push_back(m[b][i]);
                b--;
            } 
            if (l <= ri) {
                for (int i = b; i >= t; i--)
                    r.push_back(m[i][l]);
                l++;
            }
        }
        return r;
    }
};
