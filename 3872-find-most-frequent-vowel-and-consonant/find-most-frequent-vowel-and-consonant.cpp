class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>map1;
        unordered_map<char,int>map2;
        for(char ch:s){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            map1[ch]++;
            else
            map2[ch]++;
        }
        int maxi1=0,maxi2=0;
        for(auto it:map1)
        maxi1=max(maxi1,it.second);
        for(auto it:map2)
        maxi2=max(maxi2,it.second);
        return maxi1+maxi2;
    }
};