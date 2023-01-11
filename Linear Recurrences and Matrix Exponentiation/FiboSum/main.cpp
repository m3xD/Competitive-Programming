#include <bits/stdc++.h>

using namespace std;

const long long int x = 1000000007;

struct Mat {
    long long m[2][2]{};
    Mat() {
        memset(m,0,sizeof(m));
    }
    void identity() {
        for (int i = 0; i < 2; ++i) {
            m[i][i]=1;
        }
    }
    Mat operator*(Mat a) {
        Mat res;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                for (int k = 0; k < 2; ++k) {
                    res.m[i][j] += a.m[i][k] * m[k][j];
                    res.m[i][j]%=x;
                }
            }
        }
        return res;
    }
};

long long fibo(long long n) {
    if (n==0) return 0;
    if (n<=2) return 1;
    Mat res;
    res.identity();
    Mat T;
    T.m[0][0]=T.m[0][1]=T.m[1][0]=1;
    n-=2;
    while (n) {
        if (n&1) res = res * T;
        T = T*T;
        n/=2;
    }
    return (res.m[0][0] + res.m[0][1]) % x;
}

int main() {
    int l;
    cin >> l;
    while (l--) {
        long long n,m;
        cin >> n >> m;
        cout << (fibo(m+2) - fibo(n+1)+x)%x << endl;
    }
    return 0;
}

// second approach
//
