#include <bits/stdc++.h>

using namespace std;

bool binarySearch(int a[],int n,int target) {
    int l = 0, r = n-1,ans=-1;
    while (l<=r) {
        int pivot = (l+r)/2;
        if (a[pivot]==target) {
            ans=pivot;
 /*lower bound will be pivoted - 1 which mean searching in left side  */ l=pivot-1; // upper bound is pivot + 1 which mean searching in left side
        }
        if (a[pivot]>target) r=pivot-1;
        else l=pivot+1;
    }
    return ans;
}

int main() {
    int a[]={1,2,3,4,5,6,7};
    int n=7,target = -3;
    if (binarySearch(a,n,target)) cout << "found";
    else cout << "not found";
    return 0;
}
