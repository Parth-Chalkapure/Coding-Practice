#include <bits/stdc++.h>
using namespace std;

/* === Attempt 1 ===
void printPattern(int n) {
    for(int i = 0; i < 2*n - 1; i++) {
        int k = i;
        if(i >= n) k = 2*n - i - 2;
        for(int j = 0; j < k; j++) cout << n - j << " ";
        for(int j = 0; j < 2*n - 2*k - 1; j++) cout << n - k << " ";
        for(int j = 0; j < k; j++) cout << n - k + j + 1 << " ";
        cout << endl;
    }
} */

void printPattern(int n) {
    for(int i = 0; i < 2*n - 1; i++) {
        for(int j = 0; j < 2*n - 1; j++) {
            int left = j;
            int right = 2*n - j - 2;
            int top = i;
            int down = 2*n - i - 2;
            int dist = min(min(left, right), min(top, down));
            cout << n - dist << " ";
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