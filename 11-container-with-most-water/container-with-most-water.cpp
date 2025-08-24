class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,ans=0;
        int width,h,area;
        while(i!=j){
            width=j-i;
            h=min(height[i],height[j]);
            area=width*h;
            ans=max(ans,area);

            height[i]<height[j] ? i++:j--;
        }
        return ans;
    }
};