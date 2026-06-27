#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i; j++) cout << "* ";
        for(int j = 0; j < 4*i; j++) cout << " ";
        for(int j = 0; j < n - i; j++) cout << "* ";
        cout << endl;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) cout << "* ";
        for(int j = 0; j < 4*n - 4*i - 4; j++) cout << " ";
        for(int j = 0; j < i + 1; j++) cout << "* ";
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}