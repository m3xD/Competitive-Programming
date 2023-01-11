#include <bits/stdc++.h>

using namespace std;


// top down

int way_toJump(int n,int k) {
    if (n==0) return 1;
    if (n<0) return 0;
    int ans=0;
    for (int i = 1; i <= k ; ++i) {
        ans+=way_toJump(n-i,k);
    }
    return ans;
}

// top down with DP

int way_toJumpDP(int n,int k,vector<int> dp) {
    if (n==0) return 1;
    if (n<0) return 0;
    if (dp[n]!=0) return dp[n];
    int ans=0;
    for (int i = 1; i <= k ; ++i) {
        ans+=way_toJumpDP(n-i,k,dp);
    }
    return dp[n]=ans;
}

// bottom up with DP

int countWay(int n,int k) {
    vector<int> dp(10000);
    dp[0]=1;dp[1]=1;dp[2]=2;
    for (int i = 3; i <= n; ++i) {
        int t=0;
        for (int j = 1; j <= k; ++j) {
            if (i-j>=0)t+=dp[i-j];
        }
        dp[i]=t;
    }
    return dp[n];
}

// bottom up with DP and optimize by using sliding windows

int countWayDP(int n,int k) {
    vector<int> dp(n+1,0);
    dp[0]=1;dp[1]=1;
    for (int i = 2; i <= k; ++i) {
        dp[i]=2*dp[i-1];
    }
    for (int i = k+1; i <= n; ++i) {
        dp[i] = 2*dp[i-1] - dp[i-k-1];
    }
    return dp[n];
}

int main() {
    vector<int> dp(1000);
    int n,k;cin >> n >> k;
    cout << way_toJumpDP(n,k,dp) << " " << countWay(n,k) << " " << countWayDP(n,k);
    return 0;
}

