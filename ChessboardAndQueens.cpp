#include <bits/stdc++.h>
#define int long long
#define fr(i,j,n)  for(int i=j;i<n;i++)
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
using namespace std;
int prime[1000001];
int fact[1000001];
int inv[1000001];
const int mod = 1e9+7;
 
 bool isSafePlace(int n, vector<vector<int>>& board, int x, int y){
    if(board[x][y]==2) return false;
 
     int row = x;
     int col = y;
     while (row >= 0){
         if (board[row][col] == 1)
             return false;
         row--;
     }
     row = x;
     col = y;
     while (col >= 0)
     {
         if (board[row][col] == 1)
             return false;
         col--;
     }
 
     row = x;
     col = y;
 
     while (row >= 0 && col >= 0)
     {
         if (board[row][col] == 1)
             return false;
         row--;
         col--;
     }
 
     row = x;
     col = y;
 
     while (row < n && col >= 0)
     {
         if (board[row][col] == 1)
             return false;
         row++;
         col--;
     }
     return true;
    }
 
    void solveNQueens(int n, vector<vector<int>>& nQueens, int col, int &c){
        if(col == n){
            c++;
        }
 
        for(int row=0; row<n; row++){
            if(isSafePlace(n, nQueens, row, col)){
                nQueens[row][col] = 1;
                solveNQueens(n, nQueens, col+1,c);
                nQueens[row][col] = 0;
            }
        }
    }
 
int32_t main(){
 
   vector<vector<int>>v(8,vector<int>(8,0));
 
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
        char c;
        cin>>c;
        if(c=='*') v[i][j]=2;
        else v[i][j]=0;
        }
    }
        int ans = 0;
        solveNQueens(8, v, 0, ans);
        cout << ans << endl;
     }