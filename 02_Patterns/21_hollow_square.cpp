#include <bits/stdc++.h>
using namespace std;

/* === Attempt 1 ===
void printPattern(int n) {
    for(int i = 0; i < n; i++) {
        if(i == 0 || i == n - 1) {
            for(int j = 0; j < n; j++) cout << "* ";
        }
        else {
            cout << "*";
            for(int j = 0; j < 2*n - 3; j++) cout << " ";
            cout << "*";
        }
        cout << endl;
    }
} */

void printPattern(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 4; j++) {
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1) cout << "* ";
            else cout << "  ";
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