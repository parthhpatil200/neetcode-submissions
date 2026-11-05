class Solution {
    bool solve(vector<vector<char>>& board, int x,int y){
        char ch=board[x][y];
        for(int i=0;i<9;i++){
            if(i!=x && board[i][y]==ch){
                return false;
            }
        }
        for(int j=0;j<9;j++){
            if(j!=y && board[x][j]==ch){
                return false;
            }
        }
        int startRow=(x/3)*3;
        int startCol=(y/3)*3;
        for(int i=startRow;i<startRow+3;i++){
            for(int j=startCol;j<startCol+3;j++){
                if(i!=x && j!=y && board[i][j]==ch){
                    return false;
                }
            }
        }
        return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(solve(board,i,j)==false){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
