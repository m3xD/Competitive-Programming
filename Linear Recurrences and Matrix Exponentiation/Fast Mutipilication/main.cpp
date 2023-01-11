#include <bits/stdc++.h>

using namespace std;

int main() {
    int res=0;
    int a,b,c;
    cin >> a >> b >> c;
    while (b) {
        if (b&1) res+=a,res%=c;
        a*=2;a%=c;
        b/=2;
    }
    cout << res;
    return 0;
}
