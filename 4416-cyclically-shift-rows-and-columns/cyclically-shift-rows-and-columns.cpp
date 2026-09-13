class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        
        vector<vector<int>>ans(n,vector<int>(n));

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                //right shift
                int newcol=(j - rowShift[i] + n) % n;
                //col shift
                int newrow=(i - colShift[newcol] + n) % n; 
                ans[newrow][newcol]=grid[i][j];
            }
        }
        return ans;
    }
};