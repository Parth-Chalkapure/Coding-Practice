
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& arr) {
        int n = arr.size();
        float m = n / 2 - 1;
        for(int j = 0; j <= m; j++) {
            swap(arr[j], arr[n - j - 1]);
        }
    }
};

int main() {
    Solution solver;
    
    // Sample array to test your logic locally
    vector<int> my_array = {1, 2, 3, 4, 5};

    // Calling your function
    solver.reverse(my_array);

    // Printing the result to verify it worked
    cout << "[";
    for(size_t i = 0; i < my_array.size(); i++) {
        cout << my_array[i];
        if(i < my_array.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}