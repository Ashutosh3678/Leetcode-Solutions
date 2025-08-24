class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == 0) {
                    for (int k = 0; k < r; k++) {
                        if (matrix[k][j] != 0) {
                            matrix[k][j] = 'a';
                        }
                    }

                    for (int k = 0; k < c; k++) {
                        if (matrix[i][k] != 0) {
                            matrix[i][k] = 'a';
                        }
                    }
                }
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == 'a') {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};