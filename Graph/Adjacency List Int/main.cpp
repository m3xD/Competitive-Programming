#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> ans;
    void dfs(string a,unordered_map<string,multiset<string>> &m) {
        ans.push_back(a);
        while (!m[a].empty()) {
            string k =*m[a].begin();
            m[a].erase(m[a].begin());
            dfs(k,m);
        }
    }
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        int n = tickets.size();
        unordered_map<string,multiset<string>> m;
        for (int i = 0; i < n;i++) {
            m[tickets[i][0]]=tickets[i][1];
        }
        dfs("JFK",m);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};