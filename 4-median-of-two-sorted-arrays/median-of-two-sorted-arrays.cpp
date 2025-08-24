class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        vector<int> merged;
        double med;
        int i = 0, j = 0;
        int m = arr1.size(), n = arr2.size();
        // Merge while both arrays have elements
        while (i < arr1.size() && j < arr2.size()) {
            if (arr1[i] < arr2[j]) {
                merged.push_back(arr1[i]);
                i++;
            } else {
                merged.push_back(arr2[j]);
                j++;
            }
        }

        // Add remaining elements from arr1
        while (i < arr1.size()) {
            merged.push_back(arr1[i]);
            i++;
        }

        // Add remaining elements from arr2
        while (j < arr2.size()) {
            merged.push_back(arr2[j]);
            j++;
        }
        if ((m + n) % 2 == 0) {
                med = (merged[(m+n)/2-1] + merged[(m+n)/2])/ 2.00;
        } else {
            med = merged[(m + n) / 2];
        }
        return med;
    }
};