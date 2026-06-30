#include <bits/stdc++.h>
using namespace std;

void testVectorBasics() {
    vector<int> v = {12,23,9,64,23};

    v.push_back(32);
    v.emplace_back(22);
    for(int element : v) cout << element << " ";
    cout << endl;

    cout << "Last element: " << v.back();
}

void testVectorPairs() {
    vector<pair<int, int>> v;
    v.push_back({3, 4});
    v.emplace_back(14, 24);
    cout << v[1].first;
}

void testVectorCopyAndLoop() {
    vector<int> v1(10, 54);
    vector<int> v2(v1); // Deep copy of v1 into v2
    v1.push_back(2);
    
    cout << "v1 elements: ";
    for(int element : v1) cout << element << " ";
    cout << endl;
    
    cout << "v2 elements: ";
    for(int element : v2) cout << element << " ";
    cout << endl;
    
    cout << "Size of v1: " << v1.size();
}

void testVectorIterators() {
    vector<int> v1 = {23, 12, 35, 56, 12}; 

    // v.begin() points to the first element (23)
    vector<int>::iterator it1 = v1.begin(); 
    cout << "Forward iteration: ";
    for(it1; it1 != v1.end(); it1++) cout << *(it1) << " ";
    cout << endl;

    vector<int> v2 = {23, 12, 35, 56, 12};

    // v.end() points right AFTER the last element
    vector<int>::iterator it2 = v2.end(); 
    cout << "Backward iteration: ";
    for(int i = 0; i < v2.size(); i++) {
        it2--; 
        cout << *(it2) << " ";
    }
}

void testModernIterators() {
    vector<int> v = {23, 12, 35, 56, 12};

    cout << "Forward iteration: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
}

void testReverseIterators() {
    vector<int> v = {23, 12, 35, 56, 12};

    // v.rend() is one position before the first element (in reverse iteration)
    vector<int>::reverse_iterator rit_end = v.rend(); 

    // v.rbegin() starts from the last element
    vector<int>::reverse_iterator rit_begin = v.rbegin(); 
    
    // Moving a reverse iterator forward (rit++) actually moves it backward through the vector
    cout << "Reverse iteration: ";
    for (auto rit = v.rbegin(); rit != v.rend(); rit++) cout << *(rit) << " "; 
}

void testVectorErase() {
    // erasing a single element
    vector<int> v1 = {23, 12, 35, 56, 12};
    v1.erase(v1.begin()+2);

    cout << "v1 after erasing index 2: ";
    for(int element : v1) cout << element << " ";
    cout << endl;

    // erasing a range [start, end)
    vector<int> v2 = {13, 32, 2, 45, 75, 35, 23, 86};
    v2.erase(v2.begin()+3, v2.begin()+6);
    
    cout << "v2 after erasing range [3, 6): ";
    for(int element : v2) cout << element << " ";
}

void testVectorInsert() {
    vector<int> v1 = {23, 12, 35, 76};
    
    v1.insert(v1.begin()+2, 30);
    cout << "v1 after inserting 30 at index 2: ";
    for(int element : v1) cout << element << " ";
    cout << endl;

    v1.insert(v1.end(), 3, 5);
    cout << "v1 after inserting three 5s at the end: ";
    for(int element : v1) cout << element << " ";
    cout << endl;

    vector<int> v2 = {13, 32, 2, 45, 75, 35, 23, 86};
    v2.insert(v2.begin(), v1.begin()+1, v1.begin()+3);
    cout << "v2 after inserting a range from v1 at the beginning: ";
    for(int element : v2) cout << element << " ";
    cout << endl;
}

void testOtherFunctions() {
    vector<int> v = {23, 12, 35, 56, 12};

    cout << "Initial size of v: " << v.size() << endl;

    v.pop_back();
    cout << "v after pop_back(): ";
    for(int element : v) cout << element << " ";
    cout << endl;

    vector<int> v1 = {10, 20};
    vector<int> v2 = {30, 40};

    v1.swap(v2); // swap(v1, v2) also works
    cout << "v1 after swap: ";
    for(int element : v1) cout << element << " ";
    cout << endl;
    cout << "v2 after swap: ";
    for(int element : v2) cout << element << " ";
    cout << endl;
    
    v.clear();
    cout << "v after clear(): ";
    for(int element : v) cout << element << " "; // prints nothing
    cout << endl;

    cout << "Is vector v empty? (1 = true, 0 = false): " << v.empty();
}

int main() {
    // testVectorBasics();
    // testVectorPairs();
    // testVectorCopyAndLoop();
    // testVectorIterators();
    // testModernIterators();
    // testReverseIterators();
    // testVectorErase();
    // testVectorInsert();
    testOtherFunctions();

    return 0;
}