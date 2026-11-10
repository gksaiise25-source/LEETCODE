class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n = rowSum.size();
        int m = colSum.size();
        vector<vector<int>> arr_2d(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr_2d[i][j] = min(rowSum[i],colSum[j]);
                rowSum[i] -= arr_2d[i][j];
                colSum[j] -= arr_2d[i][j];
            }
        }
        return arr_2d;
    }
};