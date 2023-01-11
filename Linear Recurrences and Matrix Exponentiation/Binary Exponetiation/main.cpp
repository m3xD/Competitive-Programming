#include <bits/stdc++.h>

using namespace std;

int main() {
    // binary exponent
    int a,b,res=1;
    cin >> a >> b;
    int k = b;
    while (b) {
        if (b&1) res*=a;
        a*=a;
        b/=2;
    }
    int z = 1 << k;
    cout << res << " " << z;
    return 0;
}
