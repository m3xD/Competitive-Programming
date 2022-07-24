#include <bits/stdc++.h>

using namespace std;

int main() {
   int n;
   cin >> n;
   n = log2(n); // 1431655765 also other way to check the number base 4;
   if (n&1) {         // actually is 101010101010101010................................................................
       cout << "false";
   } else {
       cout << "true";
   }
    return 0;
}
