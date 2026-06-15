#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    if(x >=80) {
        cout << "Your grade is A";
    }
    else if(x >= 60) {
        cout << "Your grade is B";
    }
    else if(x >= 50) {
        cout << "Your grade is C";
    }
    else if(x >= 45) {
        cout << "Your grade is D";
    }
    else if(x >= 25) {
        cout << "Your grade is E";
    }
    else {
        cout << "Your grade is F";
    }
    return 0;
}
