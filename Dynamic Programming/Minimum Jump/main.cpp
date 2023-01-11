#include <bits/stdc++.h>

using namespace std;

int minJump(vector<int> a,vector<int> &dp,int n,int i) {
    if (i==n-1) return 0;
    if (i>=n) return INT_MAX;
    int max_jump = a[i];
    int ans = INT_MAX;
    for (int j = 1; j <= max_jump; ++j) {
        int next_cell = j + i;
        int subProblem = minJump(a,dp,n,next_cell);
        if (subProblem!=INT_MAX) {
            ans = min(ans,subProblem+1);
        }
    }
    return dp[i] = ans;
}

int main() {
    vector<int> a{3,4,2,1,2,3,7,1,1,3};
    int n = a.size();
    vector<int> dp(n,0);
    cout << minJump(a,dp,n,0);
    return 0;
}
