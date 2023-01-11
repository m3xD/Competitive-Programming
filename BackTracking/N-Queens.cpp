#include <bits/stdc++.h>

using namespace std;

void printBoard(int n, int board[][20]) {
    for (int i = 0; i <n;i++) {
        for (int j = 0; j < n;j++) {
            cout << board[i][j] << " ";
        } 
        cout << endl;
    }
    cout << endl;
}

bool canPlace(int n,int board[][20],int x,int y) {
    // column
    for (int i = 0; i < n; i++) {
        if (board[i][y]==1) return false;
    }
    // left diagonal 
    int j = x;
    int k = y;
    while (j>= 0&& k>=0) {
        if (board[j][k]==1) return false;
        j--;k--;
    }
    // right diagonal 
    j = x;k = y;
    while (j>=0&&k<n) {
        if (board[j][k]==1) return false;
        j--;k++;
    }
    return true;
}

bool solveNQueens(int n, int board[][20],int i) {
    // base case 
    if (i==n) {
        //print the board;
        printBoard(n,board);
        return true;
    }
    // recursive case 
    // try to place a queen in every row 
    for (int j = 0; j < n; j++) {
        // whether the current i,j is safe or not
        if (canPlace(n,board,i,j)) {
            board[i][j]=1;
            bool success = solveNQueens(n,board,i+1); 
            if (success) return true;
            board[i][j]=0;
        }
    }
    return false;
}

int main() {
    int n;cin>>n;
    int board [20][20] = {0};
    solveNQueens(n,board,0);
    return 0;
}