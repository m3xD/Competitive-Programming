#include <bits/stdc++.h>

using namespace std;

bool k_partition(vector<int> &v,int k,int sep) {
    int c = 0,t=0;
    for (int i : v) {
        t+=i;
        if (t>=sep) {
            t=0;
            c++;
        }
        if (c==k) return true;
    }
    return false;
}

int main() {
    vector<int> v = {10,22,40,50};
    int k = 3,sum=0;
    for (int i : v) sum+=i;
    int l = v[0],r = sum,ans=0;
    while (l<=r) {
        int mid = (l+r)/2;
        if (k_partition(v,k,mid)) {
            ans=mid;
            l=mid+1;
        }else {
            r=mid-1;
        }
    }
    cout << ans << endl;
    return 0;
}
