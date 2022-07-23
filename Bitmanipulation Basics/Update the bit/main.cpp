#include <bits/stdc++.h>

using namespace std;

void cleanBit(int &n,int i) {
    int mask = ~(1<<i);
    n = n & mask;
}

void updateBit(int &n,int i,int v) {
    cleanBit(n,i);
    int mask = (v<<i);
    n = n | mask;
}

int main() {

    return 0;
}
