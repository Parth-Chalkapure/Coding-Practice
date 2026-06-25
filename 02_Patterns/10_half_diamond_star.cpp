#include<bits/stdc++.h>
using namespace std;
 
/* === Attempt 1 ===
void printPattern(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
} */

/* === Attempt 2 ===
void printPattern(int n) {
    for(int i = 0; i < 2*n - 1; i++) {
        if(i >= n) {
            for(int j = n; j > i - 4; j--) {
                cout << "* ";
            }
        }
        else for(int j = 0; j < i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
} */

void printPattern(int n) {
    for(int i = 0; i < 2*n - 1; i++) {
        int s = i;
        if(i >= n) s = 2*n - i - 2;
        for(int j = 0; j < s + 1; j++) {
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