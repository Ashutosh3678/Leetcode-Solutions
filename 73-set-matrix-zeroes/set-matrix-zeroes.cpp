class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (mat[i][j] == 0) {
                    for (int k = 0; k < r; k++) {
                        if (mat[k][j] != 0) {
                            mat[k][j] = 'a';
                        }
                    }

                    for (int k = 0; k < c; k++) {
                        if (mat[i][k] != 0) {
                            mat[i][k] = 'a';
                        }
                    }
                }
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (mat[i][j] == 'a') {
                    mat[i][j] = 0;
                }
            }
        }
    }
};