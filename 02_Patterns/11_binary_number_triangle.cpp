#include <bits/stdc++.h>
using namespace std;

/* === Attempt 1 ===
void printPattern(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            if(i % 2 == 0) {
                if(j % 2 == 0) cout << "1 ";
                else cout << "0 ";
            }
            else {
                if(j % 2 == 0) cout << "0 ";
                else cout << "1 ";
            }
        }
        cout << endl;
    }
} */

void printPattern(int n) {
    int start;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j < i + 1; j++) {
            cout << start << " ";
            start = 1 - start;
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