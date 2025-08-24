class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        int n = a.size();
        vector<int> result(n);
        int posIndex = 0, negIndex = 1; 

        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                result[posIndex] = a[i];
                posIndex += 2;
            } else {
                result[negIndex] = a[i];
                negIndex += 2;
            }
        }
        return result;
    }
};
