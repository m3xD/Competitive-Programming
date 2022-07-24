#include <bits/stdc++.h>

using namespace std;

int countBitsHack(int n) {
    int ans=0;
    while (n>0) {
        n&=(n-1);
        ans++;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << countBitsHack(n);
    return 0;
}
