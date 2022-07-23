#include <bits/stdc++.h>

using namespace std;

//Update an array

void updateArray(array<int,6> &arr,int i,int val) { // all stl containers are passed by value
    arr[i]=val; // need passing by reference (&) passing by address of arr in main()
}

void print(const array<int,6> &x) { // const make functions can't modify value of array
    for (int i = 0; i < x.size(); ++i) {
        cout << x[i] << " ";
    }
}

int main() {
    array<int,6> arr={1,2,3,4,5,6};
    updateArray(arr,0,100);
    sort(arr.begin(),arr.end());
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    //fill
    array<int,10> five{}; // the value of all elements of array is 5;
    five.fill(5);
    // for-each loop
    for (int x : five) {
        cout << x << " ";
    }
    return 0;
}
