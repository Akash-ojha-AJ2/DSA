//Rotate Image
// Rotate 2d array 90 degree

class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n = matrix.size();
            vector<vector<int>> ans;
    
            for(int k = 0; k < n; k++) {
                vector<int> temp;
                for(int i = n - 1; i >= 0; i--) {
                    temp.push_back(matrix[i][k]);
                }
                ans.push_back(temp);
            }
    
            matrix = ans; // Update original matrix
        }
    };
    