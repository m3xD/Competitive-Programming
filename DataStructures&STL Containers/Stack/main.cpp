#include <bits/stdc++.h>

using namespace std;

int main() {
    // Stack
    stack<string> books;
    books.push("C");
    books.push("Java");
    while (!books.empty()) {
        cout << books.top() << endl;
        books.pop();
    }
    return 0;
}
