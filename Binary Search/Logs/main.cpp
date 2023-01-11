#include <bits/stdc++.h>

using namespace std;


int main() {
    int n=2,k=3,a[]={7,9};
    int l = 1, r=1e9,ans=0;
    while (l<=r) {
        int mid = (l+r)/2,s=0;
        for (int i = 0; i < n; ++i) {
            s+=(a[i]-1)/mid;
        }
        if (s<=k) {
            ans=mid;
            r = mid-1;
        } else {
            l=mid+1;
        }
    }
    cout << ans;
    return 0;
}
