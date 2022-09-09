class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int mid=n/2;
        for(int i=0;i<mid;i++){
            for(int j=i;j<n-i-1;j++){
                swap(matrix[i][j],matrix[j][n-i-1]);
                swap(matrix[i][j],matrix[n-j-1][i]);
                swap(matrix[n-j-1][i],matrix[n-i-1][n-j-1]);
            }
        }
    }
};