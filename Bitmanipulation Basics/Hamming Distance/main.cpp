#include <bits/stdc++.h>

using namespace std;

int hammingDistance(int x, int y) {
    int k = x ^ y,ans=0;
    while (k>0) {
        k = k&(k-1);
        ans++;
    }
    return ans;
}


int main() {
    int x,y;cin>>x>>y;
    cout << hammingDistance(x,y);
    return 0;
}
