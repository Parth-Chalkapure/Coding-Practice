#include<bits/stdc++.h>
using namespace std;

void testStackFunctions() {
    // LIFO = Last In, First Out
    stack<int> st;
    st.push(3); // {3}
    st.push(43); // {43, 3}
    st.push(9); // {9, 43, 3}
    st.push(71); // {71, 9, 43, 3}
    st.emplace(12); // {12, 71, 9, 43, 3}

    cout << "Current top element: " << st.top() << endl;

    st.pop(); // {71, 9, 43, 3}
    cout << "Top element after pop(): " << st.top() << endl;

    cout << "Total size of stack: " << st.size() << endl;

    cout << "Is stack empty? (1 = true, 0 = false): " << st.empty();
}

void testStackSwap() {
    stack<int> st1, st2;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);

    st2.push(7);
    st2.push(8);
    st2.push(9);
    
    st1.swap(st2);
    cout << "st1 top after swap: " << st1.top() << endl;
    cout << "st2 top after swap: " << st2.top();
}

// All stack operations (top, pop, push, size, empty) run in O(1) constant time

int main() {
    // testStackFunctions();
    testStackSwap();
    return 0;
}