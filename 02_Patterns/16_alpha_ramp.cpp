#include <bits/stdc++.h>
using namespace std;

/* === Attempt 1 ===
void printPattern(int n) {
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << s[i] << " ";
        }
        cout << endl;
    }
}*/

/* === Attempt 2 ===
void printPattern(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'A'; ch <= 'A' + i; ch++) cout << char('A' + i) << " ";
        cout << endl;
    }
}*/

void printPattern(int n) {
    for(int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for(int j = 0; j < i + 1; j++) cout << ch << " ";
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}

