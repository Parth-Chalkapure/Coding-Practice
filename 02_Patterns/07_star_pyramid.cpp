#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) { 
    for(int i = 0, m = n * 2 - 2; i < n; i++, m -= 2) {
        for(int o = m; o > 0; o--) {
            cout << " ";
        }
        for(int j = 0; j <= i * 2; j++) {
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