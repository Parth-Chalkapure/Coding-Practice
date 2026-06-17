#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b, int c, int d) {
    int x = a + b + c + d;
    return x;
}

int main() {
    int num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;
    int result = sum(num1, num2, num3, num4);
    cout << result;
    return 0;
}