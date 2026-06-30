#include <bits/stdc++.h>
using namespace std;

void testBasicPairs() {
    pair<int, int> p = {2, 3};
    cout << p.second << " " << p.first << endl;
}

void testNestedPairs() {
    pair<int, pair<int, int>> p = {2, {4, 5}};
    cout << p.second.first << " " << p.first << " " << p.second.second << endl;
}

void testPairArray() {
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[2].second << endl;
}

void testStringPairs() {
    pair<string, string> p = {"Ram", "Sham"};
    cout << p.first << endl;
}

int main() {
     testBasicPairs();
    // testNestedPairs();
    // testPairArray();
    // testStringPairs();

    return 0;
}
