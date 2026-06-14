class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int s = minutesToTest / minutesToDie + 1;
        int p = 0;
        long long x = 1;

        while (x < buckets) {
            x *= s;
            p++;
        }

        return p;
    }
};