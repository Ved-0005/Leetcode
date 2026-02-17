class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int,int>>indexes;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0)
                indexes.push_back({i,j});
            }
        }
        vector<bool>vrow(m,0);
        vector<bool>vcol(n,0);
        for(int i=0;i<indexes.size();i++){
            int row=indexes[i].first;
            int col=indexes[i].second;
            if(vrow[row]==0){
                for(int j=0;j<n;j++){
                    matrix[row][j]=0;
                }
                vrow[row]=1;
            }
            if(vcol[col]==0){
                for(int j=0;j<m;j++){
                    matrix[j][col]=0;
                }
                vcol[col]=1;
            }
        }
    }
};