#include <bits/stdc++.h>

using namespace std;


int boxStacking(vector<tuple<int,int,int>> a) {
    int n = a.size();
    vector<int> dp(n,1);
    int ans=INT_MIN;
    for (int i = 0; i < n; ++i)dp[i]=get<0>(a[i]);
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (get<0>(a[j])<get<0>(a[i]) and get<1>(a[j])<get<1>(a[i]) and get<2>(a[j])<get<2>(a[i])) {
                dp[i] = max(dp[i],dp[j] + get<0>(a[i]));
                ans=max(ans,dp[i]);
            }
        }
    }
    return ans;
}

int main() {
    int n;cin >> n;
    vector<tuple<int,int,int>> a(n);
    for (int i = 0; i < n; ++i) {
        int x,y,z;cin>>x>>y>>z;
        a[i]= make_tuple(z,y,x);
    }
    sort(a.begin(), a.end());
    cout << boxStacking(a);
    return 0;
}
