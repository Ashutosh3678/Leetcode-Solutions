class Solution {
public:
    bool canSplit(vector<int>& a, int k, int maxSum) {
        int subarrays = 1, currentSum = 0;
        for (int num : a) {
            if (currentSum + num > maxSum) {
                subarrays++;
                currentSum = num;
                if (subarrays > k) return false;
            } else {
                currentSum += num;
            }
        }
        return true;
    }

    int splitArray(vector<int>& a, int k) {
        int low = *max_element(a.begin(), a.end());
        int high = accumulate(a.begin(), a.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (canSplit(a, k, mid))
                high = mid;  
            else
                low = mid + 1;
        }
        return low;
    }
};