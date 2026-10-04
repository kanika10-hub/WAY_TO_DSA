class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int row=target.size();
        int col=target[0].size();
        for(int c=0;c<4;c++)
        {
        if (mat == target) {
                return true;
        }
        vector<vector<int>> temp(row, vector<int>(row));
        for (int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            { 
                
                {
                   temp[i][j]=mat[j][row-i-1];
                }
            }
        }
        mat=temp;
        }
        return false;
    }
};