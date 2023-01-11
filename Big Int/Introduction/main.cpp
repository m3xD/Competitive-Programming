#include <bits/stdc++.h>

using namespace std;

string addNumber(string &a,string &b) {
    if (a.size()>b.size()) swap(a,b);
    int carry = 0;
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());
    string res;
    for (int i = 0; i < a.size(); ++i) {
        int d1 = (int) (a[i]-48);
        int d2 = (int) (b[i]-48);
        int sum = d1+d2+carry;
        int digit=sum%10;
        carry=sum/10;
        res.push_back((char)(digit+48));
    }
    for (int i = (int) a.size(); i < b.size(); ++i) {
        int d = (int) (b[i]-48);
        int sum = d+carry;
        int digit = sum%10;
        carry = sum/10;
        res.push_back((char)(digit+48));
    }
    if (carry > 0) res.push_back('1');
    std::reverse(res.begin(), res.end());
    return res;
}

int main() {
    string a,b;
    cin >> a >> b;
    cout << addNumber(a,b);
    return 0;
}