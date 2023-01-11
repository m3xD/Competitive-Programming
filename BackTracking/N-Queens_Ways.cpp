#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ldb;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vdb;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvl;
typedef vector<string> vs;
typedef set<int> si;
typedef set<long long> sl;
typedef set<double> sdb;
typedef set<string> ss;
typedef set<char> sc;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define ftb(i, a, b) for (int i = a, _b = b; i <= _b; i++)
#define ft(i, a, b) for (int i = a, _b = b; i < _b; i++)
#define fgb(i, a, b) for (int i = a, _b = b; i >= _b; i--)
#define fg(i, a, b) for (int i = a, _b = b; i > _b; i--)
#define endl "\n"
int ans = 0;
int mx = 0;
void dfs(int node, vi adj[], vi &down, int parent, vi &num_down) {
    for (auto it : adj[node]) {
        if (it != parent) {
            dfs(it, adj, down, node, num_down);
            if (down[it] + 1 > down[node]) {
                down[node] = down[it] + 1;
                num_down[node] = 1;
            } else if (down[it] + 1 == down[node]) {
                num_down[node] += 1;
            }
        }
    }
}
void dfs_2(int node, vi adj[], vi &down, vi &up, int parent, vi &num_up) {
    int mx1 = -3, mx2 = -3;
    int index = -1;
    int z = 0, k = 0;
    for (auto it : adj[node]) {
        if (it != parent) {
            if (down[it] > mx1) {
                k = z;
                z = 1;
                mx2 = mx1;
                mx1 = down[it];
                index = it;
            } else if (down[it] > mx2) {
                mx2 = down[it];
                k = 1;
            }
        }
    }
    for (auto it : adj[node]) {
        if (it != parent) {
            up[it] = up[node] + 1;
            if (it == index) {
                if (mx2 + 2 > up[it]) {
                    up[it] = mx2 + 2;
                    num_up[it] = 1;
                } else if (mx2 + 2 == up[it]) {
                    num_up[it] += 1;
                }
            } else {
                if (mx1 + 2 > up[it]) {
                    up[it] = mx1 + 2;
                    num_up[it] = 1;
                } else if (mx1 + 2 == up[it]) {
                    num_up[it] += 1;
                }
            }
            dfs_2(it, adj, down, up, node, num_up);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vi adj[n + 1];
    ft(i, 1, n) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vi down(n + 1, 0), up(n + 1, 0);
    vi num_down(n + 1, 1), num_up(n + 1, 1);
    dfs(1, adj, down, 0, num_down);
    dfs_2(1, adj, down, up, 0, num_up);
    int mx = 0;
    ftb(i, 1, n) {
        if (down[i] + up[i] > mx) {
            mx = down[i] + up[i];
            ans = num_up[i] * num_down[i];
        } else if (down[i] + up[i] == mx) {
            ans += num_up[i] * num_down[i];
        }
    }
    cout << mx << " " << ans/(mx+1) << endl;
}