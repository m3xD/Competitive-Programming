#include <bits/stdc++.h>

using namespace std;

bool isSorted(int a[],int n,int i) {
    // base case
    if (i==n-1) return true;
    // rec case
    if (a[i] > a[i+1]) return false;
    return isSorted(a,n,i+1);
}



int main() {
    int arr[] = {1,2,8,4,5};
    int n=5;
    cout << isSorted(arr,n,0);
    return 0;
}
