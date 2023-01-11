#include <bits/stdc++.h>

using namespace std;



int main() {
    vector<int> v={30,11,23,4,20};
    sort(v.begin(),v.end());
    int h = 5,l=0,r=v[v.size()-1],ans=0;
    while (l<=r) {
       int mid = (l+r)/2,c=0;
       for (int i : v) {
            c+=(i+mid-1)/mid;
       }
       if (c<=h) {
           r = mid-1;
           ans=mid;
       } else {
           l=mid+1;
       }
    }
    cout << ans << endl;
    return 0;
}
