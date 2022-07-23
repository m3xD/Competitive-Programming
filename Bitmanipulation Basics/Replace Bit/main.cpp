#include <bits/stdc++.h>

using namespace std;

void clearBitsInt(int &n,int i,int j) {
    int a = (~0)<<(j+1);
    int b = (1<<i)-1;
    int mask = a | b;
    n = n & mask;
}

void replaceBit(int &n,int i,int j,int m) {
    clearBitsInt(n,i,j);
    int mask = (m<<i);
    n = n | mask;
}

int main() {
    int n =15;
    int i = 1, j = 3;
    int m = 2;
    replaceBit(n,i,j,m);
    cout << n;
    return 0;
}
