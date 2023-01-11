#include <bits/stdc++.h>

using namespace std;

int merge(vector<int> &v,int s,int e) {
    int i = s,m=(s+e)/2,j=m+1,c=0;
    vector<int> t;
    while (i<=m && j<=e) {
        if (v[i]<v[j]) {
            c++;
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
    return c;
}

int mergesort(vector<int> &arr,int s,int e) {
    // base case
    if (s>=e) return 0;
    // rec case
     int mid = (s+e)/2;
     int c1 = mergesort(arr,s,mid);
     int c2 = mergesort(arr,mid+1,e);
     int c3 = merge(arr,s,e);
     return c3+c2;
}

int main() {
    vector<int> arr{4,5,6,7,1};
    int n = (int) arr.size()-1;
    cout << mergesort(arr,0,n);
   // for (auto i : arr) cout << i << " ";
    return 0;
}
