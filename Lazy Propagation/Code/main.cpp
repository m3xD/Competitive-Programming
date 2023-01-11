#include <bits/stdc++.h>

using namespace std;

struct lazy_segmentTree {
    int n;
    vector<int> st, lazy;

    void init(int _n) {
        this->n = _n;
        st.resize(4 * n, 0);
        lazy.resize(4 * n, 0);
    }

    void build(int start, int ending, int node, vector<int> &v) {
        if (start == ending) {
            st[node] = v[ending];
            return;
        }
        int mid = (start + ending) / 2;
        build(start, mid, 2 * node + 1, v);
        build(mid + 1, ending, 2 * node + 2, v);
        st[node] = st[node * 2 + 1] + st[node * 2 + 2];
    }

    int query(int start, int ending, int node, int l, int r) {
        if (start > r || l > ending) {
            return 0;
        }
        if (lazy[node] != 0) {
            st[node] += lazy[node] * (ending - start + 1);
            if (ending != start) {
                lazy[2 * node + 1] += lazy[node];
                lazy[2 * node + 2] += lazy[node];
            }
            lazy[node] = 0;
        }
        if (start >= l && ending <= r) {
            return st[node];
        }
        int mid = (start + ending) / 2;
        int q1 = query(start, mid, 2 * node + 1, l, r);
        int q2 = query(mid + 1, ending, 2 * node + 2, l, r);
        return q1 + q2;
    }

    void update(int start, int ending, int node, int l, int r, int value) {
        if (start > r || l > ending) return;
        if (lazy[node] != 0) {
            st[node] += lazy[node] * (ending - start + 1);
            if (ending != start) {
                lazy[2 * node + 1] += lazy[node];
                lazy[2 * node + 2] += lazy[node];
            }
            lazy[node] = 0;
        }
        if (start >= l && ending <= r) {
            st[node] += value * (ending - start + 1);
            if (lazy[node] != 0) {
                st[node] += lazy[node] * (ending - start + 1);
                if (ending != start) {
                    lazy[node * 2 + 1] += value;
                    lazy[node * 2 + 2] += value;
                }
                return;
            }
        }
        int mid = (ending + start) / 2;
        update(start, mid, 2 * node + 1, l, r, value);
        update(mid + 1, ending, 2 * node + 2, l, r, value);
        st[node] = st[node * 2 + 1] + st[node * 2 + 2];
    }

    void build(vector<int> &v) {
        build(0, n - 1, 0, v);
    }

    void query(int l, int r) {
        query(0, n - 1, 0, l, r);
    }

    void update(int l, int r, int value) {
        update(0, n - 1, 0, l, r, value);
    }
};

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i: a) cin >> i;
    lazy_segmentTree tree;
    tree.build(a);
    tree.init(n);
    for (int i = 0; i < k; ++i) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r, value;
            cin >> l >> r >> value;
        }
        tree.init(n);
    }
    return 0;
}
