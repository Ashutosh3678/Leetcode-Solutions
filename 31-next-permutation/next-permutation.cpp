class Solution {
public:
    void nextPermutation(vector<int>& a) {
        if (a.empty() || a.size() == 1) return;
        
        int piv = -1;
        int n = a.size();
        
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] < a[i + 1]) {
                piv = i;
                break;
            }
        }
        
        if (piv == -1) {
            
            reverse(a.begin(), a.end());
            return;
        }
        for (int i = n - 1; i > piv; i--) {
            if (a[i] > a[piv]) {
                swap(a[i], a[piv]);
                break;
            }
        }
        reverse(a.begin() + piv + 1, a.end());
    }
};
