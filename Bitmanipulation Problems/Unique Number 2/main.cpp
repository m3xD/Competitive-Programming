#include <bits/stdc++.h>

using namespace std;

void uniqueNumber(vector<int> &arr) {
    int res=0;
    for (int i : arr) {
        res^=i;
    }
    int pos = 0,temp=res;
    while((temp&1)==0) {
        pos++;
        temp>>=1;
    }
    // filter out the numbers from the array which have set bits at Pos
    int s1=0,s2=0;
    int mask = (1<<pos);
    for (int i : arr) {
        if ((i&mask)>0) {
            s1^=i;
        } else {
            s2^=i;
        }
    }
    cout << s1 << " " << s2;
}

int main() {
    // 1
    // XOR of 2 num unique > 0
    // 2
    // A bit is set when it is present in exactly one of two nums
    // 3
    // Pos of any 1 set bit (first set bit from the right)
    //  2   3   4   5   4   3   7   2   6   6
    // 010 011 100 101 100 011 111 010 110 110
    // x   x    y   y   y   x   x   x   x   x
    // => XOR all (x) we have the number is 7
    // => XOR all (y) we have the number is 5
    vector<int> v{1,3,5,4,3,1,5,7};
    uniqueNumber(v);
    return 0;
}
