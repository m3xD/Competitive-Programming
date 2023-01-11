#include <bits/stdc++.h>

using namespace std;

bool canPlace(int b,vector<int> v,int sep) {
    int birds=1;
    int current_Location = v[0];
    for (int i = 1; i < v.size(); ++i) {
        int location = v[i];
        if (location - current_Location >= sep) {
            birds++;
            current_Location = location;
            if (birds==b) return true;
        }
    }
    return false;
}

int main() {
    int b = 3;
    vector<int> nests = {1,2,4,8,9};
    int n = (int) nests.size();
    int s = 0,e = nests[n-1] - nests[0],ans=0;
    while (s<=e) {
        int mid = (s+e)/2;
        if (canPlace(b,nests,mid)) {
            ans=mid;
            s=mid+1;
        } else {
            e = mid-1;
        }
    }
    cout << ans << endl;
    return 0;
}
