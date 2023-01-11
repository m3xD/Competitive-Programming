#include <bits/stdc++.h>

using namespace std;

double f(double x) {
    double y = -(x*x)+3*x;
    return y;
}

int main() {
    double left = -100, right = 100;
    while (right-left>0.0000001) {
        double mid1 = (2*left+right)/3;
        double mid2 = (2*right+left)/3;
        if (f(mid1)< f(mid2)) {
            left = mid1;
        } else {
            right = mid2;
        }
    }
    cout << left << " " << right << endl;
    return 0;
}
