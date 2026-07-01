#include<bits/stdc++.h>
using namespace std;

void testPriorityQueueFunctions() {
    // Maximum Heap
    priority_queue<int> mxpq;
    mxpq.push(5); // {5}
    mxpq.push(2); // {5, 2}
    mxpq.push(7); // {7, 5, 2}
    mxpq.push(3); // {7, 5, 3, 2}
    mxpq.emplace(9); // {9, 7, 5, 3, 2}

    cout << "Largest element at the top: " << mxpq.top() << endl;

    mxpq.pop();
    cout << "New top element after pop(): " << mxpq.top() << endl << endl;

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> mnpq;
    mnpq.push(5); // {5}
    mnpq.push(2); // {2, 5}
    mnpq.push(7); // {2, 5, 7}
    mnpq.push(3); // {2, 3, 5, 7}
    mnpq.emplace(9); // {2, 3, 5, 7, 9}

    cout << "Smallest element at the top: " << mnpq.top();

    // size, swap, and empty work exactly the same way as they do in others
}

// top runs in O(1) constant time
// push, emplace, and pop run in O(log N) logarithmic time

int main() {
    testPriorityQueueFunctions();
    return 0;
}