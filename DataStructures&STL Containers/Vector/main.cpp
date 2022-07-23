#include <bits/stdc++.h>

using namespace std;

int main() {
    // Vector can resize itself automatically when an element is inserted;
    // continuous store locations, relocations happens when underlying array is full
    // when the vector is full, they create a vector that has twice time as original vector;
    // the original vector will be deleted
    // the address of vector is the same concept of array
    // some methods inside vector
    // [], at();
    // back()
    // begin(), end()
    // capacity()
    // clear()
    // empty()
    // erase()
    // front()
    //insert()
    // pop_back()
    // push_back()
    // reserve()
    // resize()
    // size()

    //empty containers constructor
    vector<int> first;

    // fill constructor (4 ints with value 20)
    vector<int> second(4,20);
    int a[]={1,2,3,4};
    // range constructor
    vector<int> third(a,a+4);

    // copy constructor
    vector<int> fourth(third);

    // another way
    vector<int> fifth ={1,2,3,4,5};
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int no;
        cin >> no;
        v.push_back(no);
        cout << "Capacity" << v.capacity() <<  " " << "Size" <<  v.size() << endl;
    }

    // sort
    sort(v.begin(),v.end());
    return 0;
}
