#include <bits/stdc++.h>

using namespace std;

void generateBrackets(string output,int n,int open,int close,int i) {
    //base case2
    if (i==2*n) {
        cout << output << endl;
        return;
    }
    // open case 
    if (open < n) generateBrackets(output + '(',n,open+1,close,i+1);
    // close case
   if (close < open) generateBrackets(output + ')',n,open,close+1,i+1);
}

int main() {
    string output;int n;cin >> n;
    generateBrackets(output,n,0,0,0);
    return 0;
}