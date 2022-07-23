#include <bits/stdc++.h>

using namespace std;

void settheBit(int &n,int i) {
    int mask = (1<<i);
    n = n | mask;
}

int main() {
    int n,i;cin >> n >> i;
    settheBit(n,i);
    cout << n << endl;
    return 0;
}
