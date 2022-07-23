#include <bits/stdc++.h>

using namespace std;

// Get ith bit

int getithBit(int n, int i) {
    int mask = (1<<i);
    return (n&mask) > 0 ? 1 : 0;
}

int main() {
    int n = 5;
    int pos;
    cin >> pos;
    cout << getithBit(n,pos);
    return 0;
}
