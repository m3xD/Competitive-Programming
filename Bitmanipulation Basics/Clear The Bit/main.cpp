#include <bits/stdc++.h>

using namespace std;

// Clear the bit

void clearthebit(int &n,int i) {
    int mask = ~(1<<i);
    n = n & mask;
}

int main() {
    int n;
    cin >> n;
    int i; cin >> i;
    clearthebit(n,i);
    cout << n;
    return 0;
}
