class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // Get matrix dimensions
        int rowCount = matrix.size();
        int colCount = matrix[0].size();
      
        // Create boolean arrays to track which rows and columns contain zeros
        vector<bool> rowHasZero(rowCount, false);
        vector<bool> colHasZero(colCount, false);
      
        // First pass: identify all rows and columns that contain at least one zero
        for (int row = 0; row < rowCount; ++row) {
            for (int col = 0; col < colCount; ++col) {
                if (matrix[row][col] == 0) {
                    // Mark this row and column as containing a zero
                    rowHasZero[row] = true;
                    colHasZero[col] = true;
                }
            }
        }
      
        // Second pass: set matrix elements to zero based on marked rows and columns
        for (int row = 0; row < rowCount; ++row) {
            for (int col = 0; col < colCount; ++col) {
                // If current row or column was marked, set element to zero
                if (rowHasZero[row] || colHasZero[col]) {
                    matrix[row][col] = 0;
                }
            }
        }
    }
};
