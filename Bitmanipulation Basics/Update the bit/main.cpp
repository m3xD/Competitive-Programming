#include <bits/stdc++.h>

using namespace std;

void cleanBit(int &n,int i) {
    int mask = ~(1<<i);
    n = n & mask;
}

void updateBit(int &n,int i,int v) {
    cleanBit(n,i); // reformat
    int mask = (v<<i);
    // 111101010
    // OR operation
    // 000001000 ( if v = 1)
    // 000000000 ( if v = 0)
    n = n | mask;
}

int main() {

    return 0;
}
