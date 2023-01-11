#include <bits/stdc++.h>

using namespace std;

void multiply(vector<int> &v,int k,int &size) {
    int carry = 0;
    for (int i = 0; i < size; ++i) {
        int p = v[i]*k + carry;
        v[i]=p%10;
        carry = p/10;
    }
    while (carry>0) {
        v[size]=carry%10;
        carry/=10;
        size++;
    }
}

void factor(int n) {
    vector<int> v(1000,0);
    v[0]=1;
    int size = 1;
    for (int i = 2; i <= n; ++i) {
        multiply(v,i,size);
    }
    for (int i = size-1; i >= 0; i--) {
        cout << v[i];
    }
}

int main() {
    int n;
    cin >> n;
    factor(n);
    return 0;
}