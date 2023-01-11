#include <bits/stdc++.h>

using namespace std;

void overLaynumber(string s,int x) {
    int i = 0;
    while (x > 0) {
        int last_bit = x&1;
        if (last_bit) {
           cout << s[i];
        }
        i++;
        x>>=1;
    }
    cout << endl;
}

void generate(string &s) {
    for (int i = 0; i < (1<<s.size()); ++i) {
        overLaynumber(s,i);
    }
}

int main() {
    string s;
    cin >> s;
    generate(s);
    return 0;
}
