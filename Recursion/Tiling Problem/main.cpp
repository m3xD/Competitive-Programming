#include <bits/stdc++.h>

using namespace std;

int tiling(int n) {
    if (n<=3) return 1; // if n<=3 so that it only can place vertically ( size of tile is 4x1 )
    return tiling(n-1) + tiling(n-4);
}

int main() {
    int n;cin >> n;cout << tiling(n) << endl;
    return 0;
}
