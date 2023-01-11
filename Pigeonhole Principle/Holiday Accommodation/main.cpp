#include <bits/stdc++.h>

using namespace std;
// give us the size of the tree from the node where it's called
int dfs(int u,int parent, vector<pair<int,int>> adj[],long long &ans, int N) {
    int current = 1;
    for (auto p : adj[u]) {
        int v = p.first;
        int wt = p.second;
        if (v==parent) {continue;}
        int childTreeSize = dfs(v,u,adj,ans,N);
        int edgeContribution = 2 * min(childTreeSize,N - childTreeSize) * wt;
        ans+=edgeContribution;
        current += childTreeSize;
     }
    return current;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,u,v,w;
        vector<pair<int,int>> adj[100005];
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
        }
        for (int i = 1; i <= n-1; ++i) {
            cin >> u >> v >> w;
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        // dfs
        long long ans = 0;
        int k = dfs(1,-1,adj,ans,n);
        cout << ans;
    }
    return 0;
}
