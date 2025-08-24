class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int t) {
        int l=0;
        int h=arr.size()-1;
        int mid;
        int one=-1,two=-1;
        while(l<=h){
            mid=l+(h-l)/2;
            if(arr[mid]==t){
                one=mid;
                h=mid-1;
            }
            else if(t>arr[mid]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        l=0;
        h=arr.size()-1;
        

        while(l<=h){
            mid=l+(h-l)/2;
            if(arr[mid]==t){
                two=mid;
                l=mid+1;
            }
            else if(t>arr[mid]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return {one,two};

    }
};