#include <bits/stdc++.h>

using namespace std;

int countBit(int n) {
    int count=0;
    while (n>0) {
        int lastbit = n&1;
        count+=lastbit;
        n>>=1;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countBit(n) << endl;
    return 0;
}
