class Solution {
public:
    bool isValid(int i,int j,int m,int n){
        return (i >= 0 && i < m && j >= 0 && j < n);
    }
    void dfs(vector<vector<char>>& board,int i,int j,int m,int n ){
        board[i][j] = 'V';

        vector<vector<int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};

        for(int k=0;k<4;k++){
            int newI = i + dir[k][0];
            int newJ = j + dir[k][1];
            if(isValid(newI,newJ,m,n) && board[newI][newJ] == 'O'){
                dfs(board,newI,newJ,m,n);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();

        for(int i=0;i<m;i++){

            if(board[i][0] == 'O')dfs(board,i,0,m,n);
            if(board[i][n-1] == 'O')dfs(board,i,n-1,m,n);
        }
        for(int j=0;j<n;j++){
        
            if(board[0][j] == 'O')dfs(board,0,j,m,n);
            if(board[m-1][j] == 'O')dfs(board,m-1,j,m,n);
        }


        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }else if( board[i][j] == 'V'){
                    board[i][j] = 'O';
                }

            }
        }

    }
};
