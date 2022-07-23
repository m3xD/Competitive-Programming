#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    // Big O Notation
    // Time =  > f(x) = ax^2 + bx + c = >  O(n^2) <= k*n^2
    // O(1) < O(log(n)) < O(n) < o(nlog(n)) < o(n^2) < o(2^n)
    for (int i = 0; i <= n-1; ++i) {
        for (int j = i+1; j <= n-1; ++j) { // constant work = k;
            // time : n - > n-1 -> n-2 -> ..... - > 1 -> 0
            // total time : t = n*(n-1)/2 * k;
            // so that the complexity of algorithm is O(n^2)
        }
    }
    int j=0;
    for (int i = 0; i <= n-1; i+=j) { // n < k // thay j = k vi` sau moi~ loop thi` j == k
        for (int j=i+1;j<=k;j++) {
            // time (n/k)&^k == O(n)
        }
    }
    // bubble sort
    // worst case O(n^2)
    // best case O(n)
    bool c;
    int a[n];
    for (int i = 0; i < n-1; ++i) {
        c=false;
        for (int l = 0; l < n-i-1; ++l) {
            if (a[l]>a[l+1]) {
               swap(a[l],a[l+1]);
               c=true;
            }
        }
        if (!c) break;
    }
    // binary search O(log(n))
    return 0;
}
// merger sort

void mergesort(vector<int> &arr,int s,int e) {
    if (s>=e) return;
    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    return mergesort(arr,s,e);
}

// time : t(n) = k*N + 2T(N/2);
//        t(n/2) = k * (n/2) + 2 * T(N/2)
//        ...... t ( 1 ) = sigma(i->logn) = kNLogn (KN) => O(nlogn)

// Avoid TLE

// 1s = 100 M = 1e8 operations;

// worst case :

// n < 11 => O(NI) , O (n^6)
// n < 18 => O(2^n*n^2)
// n < 22 => O(2^n*n)
// n < 100 => O(n^4)
// n < 400 => O(n^3)
// n < 2000 => O(n^2*logn)
// n < 10000 => O(n^2)
// n < 1000000 => O(nlogn)
// n < 100000000 => O(1), O(N), O(log(n))