class Solution {
public:
    vector<int> pivotArray(vector<int>& a, int pivot) {
        vector<int>s;
        vector<int>e;
        vector<int>l;
        for(int i=0;i<a.size();i++){
            if(a[i]<pivot)
            s.push_back(a[i]);
            else if(a[i]>pivot)
            l.push_back(a[i]);
            else
            e.push_back(a[i]);
        }
        s.insert(s.end(), e.begin(), e.end());
        s.insert(s.end(), l.begin(), l.end());
        return s;

    }
};