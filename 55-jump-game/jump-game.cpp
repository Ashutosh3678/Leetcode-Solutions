class Solution {
public:
    bool canJump(vector<int>& a) {
        int goal=a.size()-1;
        for(int i=a.size()-2;i>=0;i--){
            if(i+a[i]>=goal){
                goal=i;
            }
        }
        return goal==0;
    }
};
