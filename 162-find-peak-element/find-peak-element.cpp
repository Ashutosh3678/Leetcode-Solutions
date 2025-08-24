class Solution {
public:
    bool isvalid(vector<int>& nums, int mid) {
        int n = nums.size();
        if ((mid == 0 || nums[mid] > nums[mid - 1]) && 
            (mid == n - 1 || nums[mid] > nums[mid + 1])) {
            return true;
        }
        return false;
    }

    int findPeakElement(vector<int>& nums) {
        int l = 0;
        int h = nums.size() - 1;
        
        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (isvalid(nums, mid)) {
                return mid;
            }
            if (mid < nums.size() - 1 && nums[mid] < nums[mid + 1]) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        return -1; 
    }
};
