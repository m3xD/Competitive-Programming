#include <bits/stdc++.h>

using namespace std;

void updateArray(int arr[],int i,int value) {
    arr[i]=value;
}
               // address (dont know actual size of array)
void printArray(int arr[],int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}

int main() {
    // all of array
    int arr[5];
    int n = sizeof(arr)/sizeof(int);
    updateArray(arr,1,13); // update actual array by address
    return 0;
}
