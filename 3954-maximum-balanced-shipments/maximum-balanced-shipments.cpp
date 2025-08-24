class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int n = weight.size();
        int count = 0;
        int i = 0;
        
        while (i < n - 1) {
            int maxVal = weight[i];
            int j = i + 1;
            
            while (j < n && weight[j] >= maxVal) {
                maxVal = weight[j];
                j++;
            }
            
            if (j < n) {
                count++;
                i = j + 1;
            } else {
                break;
            }
        }
        
        return count;
    }
};