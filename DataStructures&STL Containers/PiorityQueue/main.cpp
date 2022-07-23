#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    priority_queue<int,vector<int>,greater<int>> heap; // increasing order
   //  priority_queue<int> heap; descending order
    for (auto x : arr) {
        heap.push(x);
    }
    while (!heap.empty()) {
        cout << heap.top() << endl;
        heap.pop();
    }
    return 0;
}
