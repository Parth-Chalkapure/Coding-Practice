#include<bits/stdc++.h>
using namespace std;

/* === Pass by value ===
void doSomething(string a) {
    a[0] = 'C';
    cout << a << endl;
}

int main() {
    string str = "Match";
    doSomething(str);
    cout << str;
    return 0;
} 
*/

// === Pass by Reference ===
void doSomething(string &a) { // added & before a
    a[0] = 'C';
    cout << a << endl;
}

int main() {
    string str = "Match";
    doSomething(str);
    cout << str;
    return 0;
} 
