#include <bits/stdc++.h>

using namespace std;

const long long int m = 1e9+7;

struct Mat {
    int matrix[2][2];
    Mat() {
        memset(matrix,0,sizeof(matrix));
    }
    void identity() {
        for (int i = 0; i < 2; ++i) {
            matrix[i][i]=1;
        }
    }
    Mat operator* (Mat a) {
        Mat res;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                for (int k = 0; k < 2; ++k) {
                    res.matrix[i][j]+=matrix[i][k] * a.matrix[k][j];
                    res.matrix[i][j]%=m;
                }
            }
        }
        return res;
    }
};

int Fibo(int n) {
    Mat res;
    res.identity();
    Mat T;
    T.matrix[0][0] = T.matrix[0][1] = 1;
    if (n<=2) return 1;
    n-=2;
    while (n) {
        if (n&1) res = res * T;
        T=T*T;
        n/=2;
    }
    return (res.matrix[0][0]+res.matrix[0][1])%m;
}

int main() {
    int n=6;
    cout << Fibo(n);
    return 0;
}
