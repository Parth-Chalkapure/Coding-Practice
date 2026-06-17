#include<bits/stdc++.h>
using namespace std;

int doSomething(int arr[], int n) {
    arr[0] += 10;
    cout << "Value of arr[0] inside function: " << arr[0] << endl; 
}

int main() {
    int n = 5;
    int arr[n];
    for(int i = 0; i < 5; i += 1) { // i += 1 is same as i = i + 1
        cin >> arr[i];
    }
    doSomething(arr, n);
    cout << "Value of arr[0] inside int main: " << arr[0];
    return 0;
}

// Hence arrays are always passed by reference automatically