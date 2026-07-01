#include<bits/stdc++.h>
using namespace std;

// Most operations (insert, erase, find) run in O(log N) logarithmic time

void testMultiSet() {
    multiset<int> ms1 = {2, 2, 4};
    ms1.insert(1);
    ms1.insert(3);
    ms1.insert(1);
    ms1.insert(1);

    cout << "Initial ms1 elemnts : ";
    for(int element : ms1) cout << element << " ";
    cout << endl;

    ms1.erase(1); // Passing a VALUE erases ALL occurrences of that value
    cout << "After erasing ALL 1s (by value): ";
    for(int element : ms1) cout << element << " ";
    cout << endl;

    multiset<int> ms2 = {2, 2, 2, 2, 2, 3, 4,  5, 6, 7};
    cout << "Initial ms2 elements: ";
    for(int element : ms2) cout << element << " ";
    cout << endl;

    ms2.erase(ms2.find(2)); // Passing an ITERATOR to erase() only deletes that single specific element
    cout << "After erasing a SINGLE 2 (via iterator): ";
    for(int element : ms2) cout << element << " ";
    cout << endl;

    ms2.erase(ms2.find(2), next(ms2.find(2), 3)); // next(it, 3) advances the iterator by 3 steps.
    cout << "After erasing a range of three 2s: ";
    for(int element : ms2) cout << element << " ";
    cout << endl;

    // rest all functions are same as set
}

int main () {
    testMultiSet();
    return 0;
}