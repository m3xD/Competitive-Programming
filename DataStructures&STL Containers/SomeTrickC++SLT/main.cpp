#include <bits/stdc++.h>

using namespace std;

template<typename T>
int searchX(T arr[], int n,T x) { // can use different type of variable,even struct
    for (int i = 0; i < n; i++) {
        if (arr[i]==x) {
            return i;
        }
    }
    return -1;
}

int main() {
    // some temple,class,iterators...
    int arr[]={1,3,3,3,8,8,8,9,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;cin >> key;
    auto it = find(arr,arr+n,key);
    int index = it-arr;
    if (index != n) cout << "find out" << endl;
    else cout << "nah see u next time" << endl;
    // lower bound (find a element that equals or smaller than key)
    auto k = lower_bound(arr,arr+n,key)-arr;
    // upper bound (find a element that grater than key )
    auto z = upper_bound(arr,arr+n,key)-arr;
    // find frequency of element, simply minus upper_bound and lower_bound
    // only in sorted array
    auto final = upper_bound(arr,arr+n,key) - lower_bound(arr,arr+n,key);
    cout << "lower bound of key is " << arr[k] << endl;
    cout << "upper bound of key is " << arr[z] << endl;
    cout << "frequency of element is " << final << endl;
    // lambda expression
    vector<int> v = {1,2,3,10,12,13,15};
    //sort(v.begin(),v.end());
    // another way to sort
    sort(v.begin(),v.end(),[](int a,int b)->bool{return a > b;});
    for (auto i = v.begin(); i != v.end();i++) {
        cout <<* i << endl;
    }
    auto sum = [](auto a,auto b)->auto{
        return a + b;
    };
    cout << sum(1,2) << endl;
    cout << sum(1.1,1.2) << endl;
    cout << sum((string) "hello",(string) " world") << endl;

    return 0;
}
// function with variable number of arguments

int sumX() {
    return 0;
}

template<typename... T>
int sumX(int a,T... args) {
    return a + sumX(args...);
}