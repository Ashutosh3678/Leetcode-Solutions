class Solution {
public:
    int countArrays(vector<int>& original, vector<vector<int>>& bounds) {
        int n = original.size();
        int l = bounds[0][0], h = bounds[0][1];

        for (int i = 1; i < n; i++) {
            int diff = original[i] - original[i - 1];
            l = max(l + diff, (int)bounds[i][0]);
            h = min(h + diff, (int)bounds[i][1]);
            if (l > h){
                return 0;
            } 
        }
        return h - l + 1;
    }
};