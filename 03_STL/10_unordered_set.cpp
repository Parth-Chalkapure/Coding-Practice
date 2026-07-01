#include<bits/stdc++.h>
using namespace std;

// Average Case: O(1) constant time for insert, erase, and find operations.
// Worst Case: O(N) linear time (occurs when hash collisions happen frequently).

// lower_bound and upper_bound functions do not work 


void testUnorderedSet() {
    unordered_set<int> st = {3, 5, 1, 9, 7, 4, 7, 1, 1};

    // Duplicates are automatically removed, but order is randomized/arbitrary
    cout << "Unordered set elements: ";
    for(int element : st) cout << element << " ";
    cout << endl;

    // rest all functions are same as set
}

int main() {
    testUnorderedSet();
    return 0;
}