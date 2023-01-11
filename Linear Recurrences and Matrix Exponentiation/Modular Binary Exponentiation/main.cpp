#include <bits/stdc++.h>
long long int k = 1e9+7;

using namespace std;

int main() {
    long long int res=1;
    int a,b;
    cin >> a >> b;
    while (b) {
        if (b&1) res*=a,res%=k;
        a*=a;a%=k;
        b/=2;
    }
    cout << res%k;
    return 0;
}
