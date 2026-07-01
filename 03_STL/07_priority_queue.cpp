#include<bits/stdc++.h>
using namespace std;

// top runs in O(1) constant time
// push, emplace, and pop run in O(log N) logarithmic time

void testPriorityQueueInt() {
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
}

// size, swap, and empty work exactly the same way as they do in others

void testPriorityQueueChar() {

    priority_queue<char> mxcpq;
    mxcpq.push('A'); // {'A'}
    mxcpq.push('D'); // {'D', 'A'
    mxcpq.push('B'); // {'D', 'B', 'A'}

    cout  << "Alphabetically largest char (highest ASCII): " << mxcpq.top() << endl;

    priority_queue<char, vector<char>, greater<char>> mncpq;
    mncpq.push('A'); // {'A'}   
    mncpq.push('D'); // {'A', 'D'}
    mncpq.push('B'); // {'A', 'B', 'D'}

    cout << "Alphabetically smallest char (lowest ASCII): "<< mncpq.top();
}

void testPriorityQueueString() {

    priority_queue<string> mxspq;
    mxspq.push("Apple"); // {"Apple"}
    mxspq.push("Dog"); // {"Dog", "Apple"}
    mxspq.push("Ball"); // {"Dog", "Ball", "Apple"}

    cout << "Lexicographically largest string: " << mxspq.top() << endl;

    priority_queue<string, vector<string>, greater<string>> mnspq;
    mnspq.push("Apple"); // {"Apple"}
    mnspq.push("Dog"); // {"Apple", "Dog"}  
    mnspq.push("Ball"); // {"Apple", "Ball", "Dog"}

    cout << "Lexicographically smallest string: " << mnspq.top();
}

// Numbers as Strings: Evaluated digit-by-digit, NOT by numeric value 
// Example: "12" comes BEFORE "2" because '1' < '2'

int main() {
    // testPriorityQueueInt();
    // testPriorityQueueChar();
    testPriorityQueueString();
    return 0;
}