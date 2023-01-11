#include <bits/stdc++.h>

using namespace std;

int countBit(int n) {
    int count=0;
    while (n>0) {
        count++;
        n&=(n-1);
    }
    return count;
}

bool cmp(int a,int b) {
    if (countBit(a) != countBit(b)) return countBit(a) < countBit(b);
    else return false;
}

int main() {
    vector<int> v{0,1,2,3,4,5,6,7,8};
    sort(v.begin(),v.end(),cmp);
    for (auto x : v) {
        cout << x << " ";
    }
    return 0;
}
