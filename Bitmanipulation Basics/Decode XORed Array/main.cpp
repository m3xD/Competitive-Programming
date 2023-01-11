#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v{1,2,3};
    int first = 1;
    vector<int> ans;
    ans.push_back(first);
    for (int i = 0; i < v.size(); ++i) {
        ans.push_back(v[i]^ans[i]);
    }
    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}
