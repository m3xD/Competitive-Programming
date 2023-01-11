#include <bits/stdc++.h>

using namespace std;

int main() {
    // if n >= 130
    // the ans always yes because we have 65 pair but only have 64bits
    // so that we can conclude that always have a pair that have the same position
    // pairs have the same position will have value is 0
    // and any number xor 0 will be 0
    // if n < 130 then we brute force by using 3 nested loop to find number's d
    // a ^ b ^ c = d; using hashmap or binary search O(n^3) or O(n^3log(n))
    return 0;
}
