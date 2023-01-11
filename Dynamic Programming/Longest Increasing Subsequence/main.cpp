#include <bits/stdc++.h>

using namespace std;

int lis(vector<int> a) {
    int n = a.size();
    vector<int> dp(n,1);
    int ans=1;
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (a[i]>a[j]) {
                dp[i] = max(dp[i],dp[j]+1);
                ans = max(ans,dp[i]);
            }
        }
    }
    return ans;
}

int main() {
    int n;cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    cout << lis(a);
    return 0;
}
