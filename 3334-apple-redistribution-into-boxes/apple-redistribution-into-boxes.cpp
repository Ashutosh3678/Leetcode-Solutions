class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),greater<int>());
        int tsum=0;
        int c=0;
        int applesum=0;
        for(int i=0;i<apple.size();i++){
            applesum+=apple[i];
        }
        for(int i=0;i<capacity.size();i++){
            tsum+=capacity[i];
            c++;
            if(tsum>=applesum){
                break;
            }
        }
        return c;
    }
};