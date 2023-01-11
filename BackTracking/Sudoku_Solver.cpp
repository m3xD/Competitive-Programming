#include <bits/stdc++.h>

using namespace std;

bool check(int mat[][9],int x,int y,int no) {
    for (int i = 0; i< 9;i++) {
        if (mat[i][y]==no || mat[x][i]==no) return false;
    }
    // check for sub grid
    int sx= (x/3)*3;
    int sy= (y/3)*3;
    for (int i = sx; i < sx + 3;i++) {
        for (int j = sy; j < sy + 3;j++) {
            if (mat[i][j]==no) {
                return false;
            }
         }
    }
    return true;
} 

bool solveSudoku(int mat[][9],int i, int j,int n) {
    // base case 
    if (i==n) {
        for (int k = 0; k < 9;k++) {
            for (int f =0; f < 9;f++) {
                cout << mat[k][f] << " ";
            }
            cout << endl;
        }
        return true;
    } 
    if (j==n) {
        return solveSudoku(mat,i+1,0,n); 
    }
    // skip to prefilled cells 
    if (mat[i][j]!=0) return solveSudoku(mat,i,j+1,n);
    // recursive case 
    for (int no=1;no<=n;no++) 
    {
        if (check(mat,i,j,no)) {
            mat[i][j]=no;
            bool solvesubProblem = solveSudoku(mat,i,j+1,n);
            if (solvesubProblem==true) {
                return true;
            }
        }
    }
    // if no solution 
    mat[i][j]=0;
    return false;
}

int main() {
    int n = 9;   
    int mat[9][9] =
        {{5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}};
        solveSudoku(mat,0,0,n);
    return 0;
}