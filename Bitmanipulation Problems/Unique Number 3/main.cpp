#include <bits/stdc++.h>

using namespace std;

void updateSum(vector<int> &v,int x) {
    for (int i = 0; i < 32; ++i) {
        int bit = x & (1<<i);
        if (bit) v[i]++;
    }
}

int numFromBits(vector<int> x) {
    int num=0;
    for (int i = 0; i < 32; i++) {
        num+=(x[i]*(1<<i));
    }
    return num;
}

int uniqueNumber(vector<int> v) {
    vector<int> sumArray(32,0);
    for (int i : v) {
        updateSum(sumArray,i);
    }
    for (int i = 0; i < 32; ++i) {
        sumArray[i]%=3;
    }
    return numFromBits(sumArray);
}

int main() {
    vector<int> v{1,3,5,4,3,1,5,5,3,1};
    cout << uniqueNumber(v);
    return 0;
}
