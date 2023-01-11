#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin >> n;
    int l=1,r=n;
    while (l<=r) {
        int mid = (l+r)/2;
        if (mid*mid==n) {
            cout << "yes" << endl;
            break;
        }
        if (mid*mid>n) l = mid+1;
        else r = mid-1;
    }
    return 0;
}
