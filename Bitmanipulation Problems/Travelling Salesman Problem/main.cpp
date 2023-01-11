#include <bits/stdc++.h>

using namespace std;

int tsp(vector<vector<int>> dist,int setOfCites,int city,int n,vector<vector<int>> &dp) {
    // base case
    if (setOfCites==(1<<n)-1) {
        // return the cost from the city to the original
        return dist[city][0];
    }
    if (dp[setOfCites][city]!=-1) return dp[setOfCites][city];
    int ans = INT_MAX;
    // otherwise try all possible options
    for (int i = 0; i < n; ++i) {
        // need to check if city is checked or not
        if ((setOfCites & (1<<i))==0) {
            int subProblem = dist[city][i] + tsp(dist,setOfCites|(1<<i),i,n,dp);
            ans = min(ans,subProblem);
        }
    }
    dp[setOfCites][city]=ans;
    return ans;
}

int main() {
    vector<vector<int>> dist = {
            {0,3,10,2,0},
            {3,0,0,10,4},
            {10,0,0,1,2},
            {2,10,1,0,5},
            {0,4,2,5,0},
    };
    vector<vector<int>> dp((1<<4),vector<int> (4,-1));
    cout << tsp(dist,1,0,4,dp);
    return 0;
}