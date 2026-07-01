#include<bits/stdc++.h>
using namespace std;

// In set, everything (insert, erase, find, count, upper_bound, lower_bound) happens in O(log N) logarithmic time

void testSetFunctions() {
    set<int> st = {1, 4, 5};
    st.insert(2); // {1, 2, 4, 5}
    st.insert(5); // {1, 2, 4, 5}
    st.emplace(3); // {1, 2, 3, 4, 5}
    st.insert(1); // {1, 2, 3, 4, 5}
    st.insert(6); // {1, 2, 3, 4, 5, 6}
    st.insert(7); // {1, 2, 3, 4, 5, 6, 7}

    cout << "All elements after inserts: ";
    for(int element : st) cout << element << " ";
    cout << endl;

    auto it1 = st.find(3);
    cout << "Element found using st.find(3): " << *(it1) << endl;

    auto it2 = st.find(8); 
    // 8 is not found, so it2 == st.end() 
    // st.end() points PAST the last element
    // Printing *(it2) directly here would cause undefined behavior

    st.erase(it1); // it takes constant time
    cout << "Elements after erasing iterator it1 : ";
    for(int element : st) cout << element << " ";
    cout << endl;

    st.erase(5); // it takes logarithmic time
    cout << "Elements after erasing value 5: ";
    for(int element : st) cout << element << " ";
    cout << endl;
    
    int cnt = st.count(5);
    cout << "Count of element 5 in the set: " << cnt << endl;

    auto it3 = st.find(4);
    auto it4 = st.find(7);
    st.erase(it3, it4); // [first, last)

    cout << "Elements after erasing range [4, 7): ";
    for(int element : st) cout << element << " ";
    cout << endl;

    // Vector functions i.e. begin(), end(), rbegin(), rend(), size(), empty(), swap() can be used for Set too.
}

void testLowerAndUpperBound() {
    set<int> st = {2, 3, 4, 6, 9, 11};

    // Lower Bound: Element >= X
    auto it1 = st.lower_bound(4); 
    cout << "lower_bound(4): "<< *it1 << endl;

    auto it2 = st.lower_bound(7); 
    cout << "lower_bound(7): " << *it2 << endl;

    auto it3 = st.lower_bound(13); // Points to st.end()

    // Upper Bound: Element > X
    auto it4 = st.upper_bound(2); 
    cout << "upper_bound(2): " << *it4 << endl;

    auto it5 = st.upper_bound(5);   
    cout << "upper_bound(5): " << *it5 << endl;

    auto it6 = st.upper_bound(12); // Points to st.end()
}

int main() {
    // testSetFunctions();
    testLowerAndUpperBound();

    return 0;
}