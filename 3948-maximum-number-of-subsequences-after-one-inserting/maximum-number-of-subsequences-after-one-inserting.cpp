class Solution {
public:
    long long numOfSubsequences(string s) {
        int n = (int)s.size();
        vector<long long> sl(n + 1, 0), st(n + 1, 0), slc(n + 1, 0), sct(n + 1, 0);

        for (int i = 0; i < n; ++i)
            sl[i + 1] = sl[i] + (s[i] == 'L');

        for (int i = n - 1; i >= 0; --i)
            st[i] = st[i + 1] + (s[i] == 'T');

        long long lcount = 0, slct = 0;
        for (int i = 0; i < n; ++i) {
            slc[i + 1] = slc[i];
            if (s[i] == 'C') {
                slc[i + 1] += lcount;
                slct += lcount * st[i + 1];
            }
            if (s[i] == 'L') ++lcount;
        }

        long long tcount = 0;
        for (int i = n - 1; i >= 0; --i) {
            sct[i] = sct[i + 1];
            if (s[i] == 'C') sct[i] += tcount;
            if (s[i] == 'T') ++tcount;
        }

        long long best = 0;
        for (int i = 0; i <= n; ++i) {
            best = max(best, sct[i]);           
            best = max(best, sl[i] * st[i]);    
            best = max(best, slc[i]);           
        }

        return slct + best;
    }
};
