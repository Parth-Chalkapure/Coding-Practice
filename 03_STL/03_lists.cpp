#include<bits/stdc++.h>
using namespace std;

void testList() {
    list<int> ls = {2, 5, 24, 43};

    ls.push_back(32); // {2, 5, 24, 43, 32}
    ls.emplace_back(34); // {2, 5, 24, 43, 32, 34}

    ls.push_front(63); // {63, 2, 5, 24, 43, 32, 34}
    ls.emplace_front(12); // {12, 63, 2, 5, 24, 43, 32, 34}

    ls.pop_back(); //{12, 63, 2, 5, 24, 43, 32}
    ls.pop_front(); //{63, 2, 5, 24, 43, 32}

    cout << "All elements after mutations: ";
    for(int element : ls) cout << element << " ";
    cout << endl;

    cout << "Last element : " << ls.back() << endl;
    cout << "First element : " << ls.front() << endl;

    // rest functions are same as vectors
}

int main() {
    testList();
    return 0;
}