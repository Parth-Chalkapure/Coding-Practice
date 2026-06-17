#include<bits/stdc++.h>
using namespace std;

int minn(int x, int y) {
    if(x > y) return y;
    else return x;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int minimum = minn(num1, num2);
    cout << minimum;
    return 0;
}

// same for maximum
