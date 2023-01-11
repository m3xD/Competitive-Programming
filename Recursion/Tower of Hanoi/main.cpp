#include <bits/stdc++.h>

using namespace std;

void TowerOfHanoi(int n,char from,char helper,char to) {
    if (n==0) {
        return;
    }
    TowerOfHanoi(n-1,from,to,helper);
    cout << from << "->" << to << endl;
    TowerOfHanoi(n-1,helper,from,to);
}

int main() {
    int n;cin >> n;
    TowerOfHanoi(n,'A','B','C');
    cout << endl;
    return 0;
}
