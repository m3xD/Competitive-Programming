#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &v,int s,int e) {
    int i = s,m=(s+e)/2,j=m+1;
    vector<int> t;
    while (i<=m && j<=e) {
        if (v[i]<v[j]) {
            t.push_back(v[i]);i++;
        } else {
            t.push_back(v[j]);j++;
        }
    }
    // copy remaining elements from first or second array
    while (i<=m) t.push_back(v[i++]);
    while (j<=e) t.push_back(v[j++]);
    // copy back to original array
    int f = 0;
    for (int k = s; k <= e; ++k) {
        v[k]=t[f++];
    }
}

void mergesort(vector<int> &arr,int s,int e) {
    // base case
    if (s>=e) return;
    // rec case
    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    return merge(arr,s,e);
}

int main() {
    vector<int> arr{10,5,2,0,7,6,4};
    int n = (int) arr.size()-1;
    mergesort(arr,0,n);
    for (auto i : arr) cout << i << " ";
    return 0;
}
