class Solution {
public:
    bool isvalid(vector<int>&piles,int h,int k){
        int total=0;
        for(int i:piles){
            total+=(i+k-1)/k;
        }
        return total<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int hi=*max_element(piles.begin(),piles.end());
        while(l<hi){
            int mid=(l+hi)/2;
            if(isvalid(piles,h,mid))
            hi=mid;
            else
            l=mid+1;
        }
        return hi;
    }
};