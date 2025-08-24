class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        int n = a.size();
        int i = 0;
        
        while (i < n) {
            if (a[i] > 0 && a[i] <= n) { 
                int correct = a[i] - 1;
                if (a[i] != a[correct]) {
                    swap(a[i], a[correct]);
                    continue; 
                }
            }
            i++;
        }

        for (int i = 0; i < n; i++) {
            if (a[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }
};