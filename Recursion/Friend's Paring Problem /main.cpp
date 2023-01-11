#include <bits/stdc++.h>

using namespace std;

int counting(int n) {
    // base case
    if (n==0 || n== 1) return 1;
    if (n==2) return 2;
    // rec case
    return counting(n-1) + counting(n-2)*(n-1);
}

int main() {
    int n;cin>>n;cout << counting(n);
    return 0;
}
