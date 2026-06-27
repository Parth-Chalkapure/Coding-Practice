#include <bits/stdc++.h>
using namespace std;

/* === Attempt 1 ===
void printPattern(int n) {
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2*n - 2*i - 2; j++) {
            cout << " ";
            }
        for(int j = 0; j < 2*i + 1; j++) {
            if(j >= i + 1) cout << s[2*i - j] << " ";
            else cout << s[j] << " ";
        }
        cout << endl;
    }
} */

void printPattern(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2*n - 2*i - 2; j++) cout << " ";
        char ch = 'A';
        for(int j = 0; j < 2*i + 1; j++) {
            cout << ch << " ";
            if(j >= i) ch--;
            else ch++;
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

