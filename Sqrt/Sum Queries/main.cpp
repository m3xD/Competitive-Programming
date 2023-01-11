#include <bits/stdc++.h>

using namespace std;
long long k[2000000]={0};

struct mo {
    int left{}, right{}, id{}, block{};
    long long ans{};
    bool operator<(mo P) const {
        return make_pair(P.block, P.right) > make_pair(this->block, right);
    }
};

void add(long long value, vector<mo> &b, long long &hold) {
    if (k[value]!=0) {
        hold -= (k[value] * k[value] * value);
    }
    k[value]++;
    hold+=k[value]*k[value]*value;
}

void subtract(long long value, vector<mo> &b, long long &hold) {
    if (k[value]!=0) hold-=k[value]*k[value]*value;
    k[value]--;
    hold+=k[value]*k[value]*value;
}


int main() {
    int n, m;
    cin >> n >> m;
    int b = (int) sqrt(n);
    vector<long long> a(n);
    for (auto &i: a) cin >> i;
    vector<mo> A(m);
    memset(k,0,sizeof(k));
    for (int i = 0; i < m; ++i) {
        cin >> A[i].left >> A[i].right;
        A[i].left--;
        A[i].right--;
        A[i].id = i;
        A[i].block = A[i].left/b;
    }
    sort(A.begin(), A.end());
    int x = 0, y = 0;long long res=0;
    for (int i = 0; i < m; ++i) {
        while (y <= A[i].right) {
            add(a[y], A, res);
            y++;
        }
        while (y > A[i].right + 1) {
            y--;
            subtract(a[y], A, res);
        }
        while (x < A[i].left) {
            subtract(a[x], A, res);
            x++;
        }
        while (x > A[i].left) {
            x--;
            add(a[x], A, res);
        }
        A[i].ans=res;
    }
    sort(A.begin(), A.end(), [](mo X, mo Y) { return X.id < Y.id; });
    for (int i = 0; i < m; ++i)cout << A[i].ans << endl;
    return 0;
}