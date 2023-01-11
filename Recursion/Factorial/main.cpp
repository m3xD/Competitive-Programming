#include <bits/stdc++.h>

using namespace std;

// find the base case
// assume that the sub problem always exists;
// solve the current problem assuming sub problem solution exists

int factorial(int n) {
    // base case
    if (n==0) return 1;
    // recursive case
    int ans = n * factorial(n-1); // callstack ( its store function to wait the value to be returned until reach base case )
    return ans;
}

int main() {
    int n;
    cin >> n; cout << factorial(n);
    return 0;
}
