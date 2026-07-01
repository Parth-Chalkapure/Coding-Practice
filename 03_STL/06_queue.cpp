#include<bits/stdc++.h>
using namespace std;

void testQueueFunctions() {
    // FIFO = First In, First Out
    queue<int> q;
    q.push(3); // {3}
    q.push(43); // {3, 43}
    q.push(9); // {3, 43, 9}
    q.push(71); // {3, 43, 9, 71}
    q.emplace(12); // {3, 43, 9, 71, 12}

    cout << "Last element added: " << q.back() << endl;

    cout << "First element in line: " << q.front() << endl;

    q.pop();
    cout << "New front element after pop(): " << q.front() << endl;

    // size, swap, and empty work exactly the same way as they do in stacks
}

// All queue operations (pop, push, front, back, size, empty) run in O(1) constant time

int main() {
    testQueueFunctions();
    return 0;
}

