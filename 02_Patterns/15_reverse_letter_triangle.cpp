#include <bits/stdc++.h>
using namespace std;

/* === Attempt 1 ===
void printPattern(int n) {
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i; j++) {
            cout << s[j] << " ";
        }
        cout << endl;
    }
} */

void printPattern(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'A'; ch < 'A' - i + n; ch++) cout << ch << " ";
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}

