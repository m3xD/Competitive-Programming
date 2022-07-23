#include <bits/stdc++.h>

using namespace std;

int main() {
    // binary operation
    // 1. binary and (&)
    // 1&0 = 0, 0&1 = 0, 0&0=0;
    // 1&1 = 1
    // example 5&7
    // 0000101
    //&0000111
    // result is 0000101 = 5 ;
    // 2. binary or (|)
    // 1 | 1 = 1, 1 | 0 = 1, 0 | 1 = 1;
    // 0 | 0 = 0
    // example 5 | 8r
    // 0101
    // 1000
    // 1101 = 13
    // 3. binary XOR (^) (exclusive or)
    // 0^0 = 0; 1^1=0;
    // 0^1=1; 1^0=1;
    // example 5^7
    // 101
    // 111
    // 010 = 2;
    // 4. binary not (~)
    // ~0 = 1, ~1 = 0
    // example : ~(000101) = 111010
    // int a = 0 ; ~(a) = -1;
    // convert 000.....0 = 1.......1 which first bit is sign bit (1 is negative)
    // invert 31 bits left to 0 and add 1 so that we get the answer is -1; (2s compliment)
    // 5. binary left shift (<<)
    // example 5 << 2;
    //  0000101 --> 0010100 (left shift 2)
    // 2^2 + 2^0 = x --> 2^4 + 2^2 = 2^2(2^2 + 2^0) = 2^2 * x;
    // actually a << b = a * 2^b;
    // 6. binary right shift (>>)
    // example 10 >> 1;
    // 001010 ----> 000101 = 5
    // actually a>>b = a / 2^b;
    return 0;
}
