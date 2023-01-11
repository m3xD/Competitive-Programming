#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;cin>>n;map<int,vector<int> > m;
    vector<int> a(n);long long res=0,t=0;
    for (int i = 0; i < n;i++) {
        cin >> a[i];m[a[i]].push_back(i);
        if (m[a[i]].size()==1) {
            t++;
        } else {
            res=max(res,t);
            int x=m[a[i]][1]-m[a[i]][0];
            if (x==t) t=x;
            else t=abs(t-x);
            m[a[i]][0]=m[a[i]][1];
            m[a[i]].pop_back();
        }
    }
    res=max(res,t);
    cout << res;
    return 0;
}