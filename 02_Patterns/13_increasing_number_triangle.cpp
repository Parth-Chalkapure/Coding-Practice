#include <bits/stdc++.h>
using namespace std;

/* === Attempt 1 === 
void printPattern(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            int k = i + 1;
            int l = i * k;
            int m = l / 2;
            cout << m + 1 + j << " ";
        }
        cout << endl;
    }
} */

void printPattern(int n) {
    int c = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << c << " ";
            c += 1;
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
