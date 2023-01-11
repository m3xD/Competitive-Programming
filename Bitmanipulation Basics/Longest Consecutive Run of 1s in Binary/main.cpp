#include <bits/stdc++.h>

using namespace std;

int maxVal(int n) {
    int count=0,res=0;
    while (n>0) {
        if (n&1) {
            count++;
        } else {
            res=max(res,count);
            count=0;
        }
        n>>=1;
    }
    res=max(res,count);
    return res;
}

int main() {
    int n;cin>>n;
    cout << maxVal(n);
    return 0;
}
