#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
     for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2*n - 2*i - 2; j++) {
            cout << " ";
        }
        for(int k = 0; k < 2*i + 1; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2*i; j++) {
            cout << " ";
        }
        for(int k = 0; k < 2*n - 2*i - 1; k++) {
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
