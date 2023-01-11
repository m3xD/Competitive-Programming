#include <bits/stdc++.h>

using namespace std;
int n,ans;
void targetSum(int x,int v[],int n,int sum,char c,int val) {

    if (n - 1 == x) {
        if (sum + (c=='+' ? v[x] : -v[x])==val) ans++;
        return;
    }
    targetSum(x+1,v,n,sum+(c=='+' ? v[x] : -v[x]),'+',val);
    targetSum(x+1,v,n,sum+(c=='+' ? v[x] : -v[x]),'-',val);
}

int main() {
    int v[]={1,1,1,1,1};
    n = 5;
    int target = 3;ans=0;
    targetSum(0,v,n,0,'+',target);
    targetSum(0,v,n,0,'-',target);
    cout << ans;

}   