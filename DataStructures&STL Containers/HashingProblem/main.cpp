#include <bits/stdc++.h>

using namespace std;

int main() {
    unordered_map<string,int> menu;
    // Insert key - value inside the hashtable O(1) operation
    menu["maggi"] = 15;
    menu["colddrink"] =20;
    menu["dosa"] = 99;

    // update query
    menu["dosa"]*=(1+0.1);

    // delete query
    menu.erase("dosa");

    // searching inside a collection of key-value pairs that inside a hashtable
    string item;
    cin >> item;
    if (menu.count(item)==0) {
        cout << item << " is not available" << endl;
    } else {
        cout << item << " is available, and its cost is " << menu[item] << endl;
    }
    // iterating through all key-value pairs that are present
    for (pair<string,int> x:menu) {
        cout << x.first << " " << x.second << endl;
    }
    // using map can have list in order but all operation will take O(log(n)) per operation;
    // because map use balanced trees;


    // the example of map(unordered_map)
    // phone book
    map<string,list<string>> phonebook;
    phonebook["Prattek"].push_back("1111111");
    phonebook["Prattek"].push_back("1111112");
    phonebook["Prattek"].push_back("1111113");
    phonebook["Khanh"].push_back("1111114");
    phonebook["Khanh"].push_back("1111115");

    // unordered_set
    // set is just a collection of keys
    // array O(N)
    unordered_set<int>s{1,2,3,4,5,10,0}; // sort set O(log(n))
    // each insert element is O(1)
    s.insert(11);
    // erase O(1)
    s.erase(11);
    int key;cin >> key;
    // search element in set
    if (s.find(key)!=s.end()) { // O(1)
        cout << "Key found";
    } else {
        cout << "Key do not found";
    }

    // print all elements in set
    for (auto x : s) cout << x << " ";
    // Pair Sum Problem
    // 2 nested loops O(n^2)
    // Sorting and 2 pointer O(nlog(n))
    // Sorting and binary search O(nlog(n))
    // Using hashtable O(N)

    return 0;
}
// avoid repeating pair of sum
void pairSum(vector<int> arr,int sum) {
    unordered_set<int > s;
    for (int i = 0; i < arr.size();i++) {
        int x=sum-arr[i];
        if (s.find(x) != s.end()) {
            cout << x << " " << arr[i] << endl;
        }
        s.insert(arr[i]);
    }
}
