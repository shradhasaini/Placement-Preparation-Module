class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        set<int> x, y;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    x.insert(i);
                    y.insert(j);
                }
            }
        }
      for (auto i : x)
      {
          for(int j = 0; j<n; j++){
              if(matrix[i][j]!=0){
                  matrix[i][j]=0;
              }
          }
      }
      for (auto j : y)
      {
          for(int i = 0; i<m; i++){
              if(matrix[i][j]!=0){
                  matrix[i][j]=0;
              }
          }
      }
    }
};