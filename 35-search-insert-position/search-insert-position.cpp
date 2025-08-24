class Solution {
public:
    int searchInsert(vector<int>& arr, int t) {
        int l=0;
        int h=arr.size()-1;
        int m;
        while(l<=h){
            m=l+(h-l)/2;
            if(arr[m]==t){
                return m;
            }
            else if(t>arr[m]){
                l=m+1;
            }
            else{
                h=m-1;
        }
        }
        return l; 
    }
};