class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool ro[9][9]={false};
        bool col[9][9]={false};
        bool boxx[9][9]={false};
        for(int i=0;i<9;i++)
        {
         for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    int num=board[i][j]-'1';
                    int box=(i/3)*3+j/3;
                    if(ro[i][num] || col[j][num] || boxx[box][num])
                    {
                        return false;
                    }
                    ro[i][num]=true;
                    col[j][num]=true;
                    boxx[box][num]=true;
                }
            }
        }
        return true;
    }
};