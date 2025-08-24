class Solution {
public:
    bool checkPrimeNumber(int num) {
        if (num < 2) return false;
        if (num == 2 || num == 3) return true;
        if (num % 2 == 0 || num % 3 == 0) return false;
        
        for (int divisor = 5; divisor * divisor <= num; divisor += 6) {
            if (num % divisor == 0 || num % (divisor + 2) == 0) {
                return false;
            }
        }
        return true;
    }
    
    long long splitArray(vector<int>& nums) {
        long long primeSum = 0;     
        long long nonPrimeSum = 0;  
        
        for (int pos = 0; pos < nums.size(); pos++) {
            if (checkPrimeNumber(pos)) {
                primeSum += nums[pos];
            } else {
                nonPrimeSum += nums[pos];
            }
        }
        
        return abs(primeSum - nonPrimeSum);
    }
};