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

void quickSort(vector<int> &v,int s,int e) {
    if (s>=e) return;
    int p = chia(v,s,e);
    quickSort(v,s,p-1);
    quickSort(v,p+1,e);
}

int main() {
    vector<int> arr{10,5,2,0,7,6,4};
    cout<< arr.size() <<endl;
    int n = (int) arr.size();
    quickSort(arr,0,n-1);
    for(int x :arr){
        cout << x << " ";
    }
    return 0;
}
