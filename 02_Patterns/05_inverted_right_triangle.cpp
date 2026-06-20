#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for(n; n > 0; n--) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}   