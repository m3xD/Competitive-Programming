#include <bits/stdc++.h>

using namespace std;

int main() {
    int x = 0;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        x^=a[i];
    }
    // O(n) and space is O(1)
    cout << x << endl;
    return 0;
}
