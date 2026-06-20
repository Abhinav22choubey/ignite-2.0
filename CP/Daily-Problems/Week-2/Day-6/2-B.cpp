class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0, j = 0, r = matrix.size(), c = matrix[0].size();
        while( i < r && j < c ){
            if ( matrix[i][j] == target ){
                return true;
            }else if( matrix[i][c-1] < target ){
                i++;
            }else{
                j++;
            }
        }
      
        return false;
    }
};
