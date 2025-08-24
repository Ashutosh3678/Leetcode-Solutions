class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        
        map<int, int> yCount;
        for (auto& point : points) {
            yCount[point[1]]++;
        }
        
        vector<long long> combinations;
        for (auto& [y, count] : yCount) {
            if (count >= 2) {
                long long comb = (long long)count * (count - 1) / 2;
                combinations.push_back(comb);
            }
        }
        
        int n = combinations.size();
        if (n < 2) return 0;
        
        long long totalSum = 0;
        long long totalSquareSum = 0;
        const int MOD = 1e9 + 7;
        
        for (long long comb : combinations) {
            totalSum = (totalSum + comb) % MOD;
            totalSquareSum = (totalSquareSum + (comb * comb) % MOD) % MOD;
        }
        
        long long result = (totalSum * totalSum - totalSquareSum + MOD) % MOD;
        result = (result * 500000004LL) % MOD;
        
        return result;
    }
};