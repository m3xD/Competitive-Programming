#include <bits/stdc++.h>

using namespace std;

struct segmentTree {
    int n;vector<long long> st;
    void init(int _n) {
        this->n=_n;
        st.resize(4*n,0);
    }
    void build(long long start,long long ending,long long node,vector<long long> &v) {
        if (start==ending) {
            st[node]=v[start];
            return;
        }
        long long mid=(start+ending)/2;
        build(start,mid,2*node+1,v);
        build(mid+1,ending,2*node+2,v);
        // prefix sum
        st[node] = st[node*2+1] + st[node*2+2];
    }
    long long query(long long start,long long ending,long long node,long long l,long long r) {
        if (start>r||ending<l) {
            return 0;
        }
        if (start>=l&&r>=ending) {
            return st[node];
        }
        long long mid = (start+ending)/2;
        long long q1=query(start,mid,2*node+1,l,r);
        long long q2=query(mid+1,ending,2*node+2,l,r);
        return q1+q2;
    }
    void update(long long start,long long ending,long long node,long long index,long long value) {
        if (start==ending) {
            st[node] = value;return;
        }
        long long mid = (start+ending)/2;
        update(start,mid,2*node+1,index,value);
        update(mid+1,ending,2*node+2,index,value);
        st[node] = st[node*2+1] + st[node*2+2];
    }
    void build(vector<long long> &v) {
        build(0,n-1,0,v);
    }
    long long query(long long x,long long y) {
        return query(0,n-1,0,x,y);
    }
    void update(long long x,long long y) {
        update(0,n-1,0,x,y);
    }
};

int main() {
    segmentTree tree;
    vector<long long> a{1,2,3,4,5,6,7,8};
    tree.init(a.size());
    tree.build(a);
    cout << tree.query(0,3);
    return 0;
}