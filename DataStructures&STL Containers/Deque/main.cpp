#include <bits/stdc++.h>

using namespace std;

int main() {
    // Deque is dynamic size that can be expanded or contracted on both sizes on both ends
    // Deque are not guaranteed to store all its elements in continuous storage locations (which can not use pointer to access element)
    // elements of a deque can be scattered in different chunks of storage
    //usually useful for sliding windows
    // Some methods:
    // [] , at() * // access elements
    // back() * // access last element
    // begin()
    //clear() * // clear deque into size 0;
    // empty()
    // end()
    //erase()
    // front() * // access first element
    //insert()
    // pop_back() pop_front() * //
    // push_back() push_back() *
    // resize()
    // size() *
    deque<int> first; // empty deque
    deque<int> second(4,100); // four int with value 100
    deque<int> third(second.begin(), second.end()); // iterating through second
    deque<int> fourth(third); // a copy of third
    //-----------------------
    int a[]={1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(int);
    deque<int> fifth(a,a+n);
    //-------------------------
    deque<int> dq;
    int k;
    cin >> k;
    dq.push_back(k); // push back
    dq.pop_back(); // remove last element
    dq.push_front(k); // push element to the front
    dq.pop_front(); // remove first element
    dq.front(); // get reference to front
    dq.back(); // get reference to back
    // constant time O(1)
    return 0;
}
