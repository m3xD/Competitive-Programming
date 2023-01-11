#include <bits/stdc++.h>

using namespace std;

void decresing(int n) {
    if (n==0) return;
    cout << n << " ";
    decresing(n-1);
}

void increasing(int n) {
    if (n==0) return;
    increasing(n-1);
    cout << n << " ";
}

int main() {
    int n;cin>>n;decresing(n);cout << endl;increasing(n);
    return 0;
}
