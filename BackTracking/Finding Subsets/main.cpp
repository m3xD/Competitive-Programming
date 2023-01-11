#include <bits/stdc++.h>

using namespace std;

void findingSubset(char *input,char *output,int i,int j) {
    // base case
    if (input[i]==NULL) {
        output[j]=NULL;
        cout << output << endl;
        return;
    }
    output[j] = input[i];
    findingSubset(input,output,i+1,j+1);
    findingSubset(input,output,i+1,j);
}

int main() {
    char input[10000],output[10000];
    cin >> input;
    findingSubset(input,output,0,0);
    return 0;
}
