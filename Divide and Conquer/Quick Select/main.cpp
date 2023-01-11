#include <bits/stdc++.h>

using namespace std;

int chia(vector<int> &v,int s,int e) {
    int pivot = v[e];
    int p = s-1;
    for (int i = s; i < e; ++i) {
        if (v[i]<pivot) {
            p++;
            swap(v[p],v[i]);
        }
    }
    swap(v[p+1],v[e]);
    return p+1;
}

int quickSort(vector<int> &v,int s,int e,int k) {
    int p = chia(v,s,e);
    if (p==k) return v[p];
    else if (k<p) return quickSort(v,s,p-1,k);
    else return quickSort(v,p+1,e,k);
}

int main() {
    vector<int> arr{10,5,2,0,7,6,4};
    cout<< arr.size() <<endl;
    int n = (int) arr.size();
    int k;cin >> k;
    cout << quickSort(arr,0,n-1,k);
    return 0;
}
