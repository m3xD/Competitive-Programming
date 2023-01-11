#include <bits/stdc++.h>

using namespace std;

int power(int a,int n) {
    if (n==0) return 1;
    return a*power(a,n-1);
}

int fastPower(int a,int n) {
    if (n==0) return 1;
    int subProblem = fastPower(a,n/2);
    int subProblemSq = subProblem * subProblem;
    if (n&1) return a * subProblemSq;
    return subProblemSq;
}

int main() {
    int n, a;
    cin >> a >> n;cout << power(a,n) << " " << fastPower(a,n);
    return 0;
}
