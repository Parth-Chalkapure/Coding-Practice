#include<bits/stdc++.h>
using namespace std;

void testDeque() {
    deque<int> dq = {2, 5, 24, 43};

    dq.push_back(32); // {2, 5, 24, 43, 32}
    dq.emplace_back(34); // {2, 5, 24, 43, 32, 34}

    dq.push_front(63); // {63, 2, 5, 24, 43, 32, 34}
    dq.emplace_front(12); // {12, 63, 2, 5, 24, 43, 32, 34}

    dq.pop_back(); //{12, 63, 2, 5, 24, 43, 32}
    dq.pop_front(); //{63, 2, 5, 24, 43, 32}

    cout << "All elements after mutations: ";
    for(int element : dq) cout << element << " ";
    cout << endl;

    cout << "Last element : " << dq.back() << endl;
    cout << "First element : " << dq.front() << endl;

    // rest functions are same as vectors
}

int main() {
    testDeque();
    return 0;
}