class Solution {
public:
    bool isSafe(vector<string>&board, int row,int column, int n){
        for(int j = 0; j < row; j++){
            if(board[j][column] == 'Q'){
                return false;
            }
        }
        for(int i = row, j = column; i >= 0 && j >= 0; i--, j--){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        for(int i = row, j = column; i >= 0 && j < n; i--, j++){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
        return true;
    }
    void queens(vector<string>&board, vector<vector<string>>&ans, int row, int n){
        if(row == n){
            ans.push_back(board);
            return;
        }
        for(int i = 0; i < n; i++){
            if(isSafe(board, row,i, n)){
                board[row][i] = 'Q';
                queens(board, ans, row + 1, n);
                board[row][i] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<string>board(n, string(n, '.'));
        vector<vector<string>>ans;
        queens(board,ans, 0, n);
        return ans.size();
    }
};