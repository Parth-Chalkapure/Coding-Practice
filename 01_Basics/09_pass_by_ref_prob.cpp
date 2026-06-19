/* Q. Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.
 */
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
    int n;
    if (cin >> n) { // Read the size of the array first
        vector<int> my_array(n);
        for(int i = 0; i < n; i++) {
            cin >> my_array[i]; // Read each element into the vector
        }

        Solution solver;
        solver.reverse(my_array);

        // Print the result to output.txt
        cout << "[";
        for(size_t i = 0; i < my_array.size(); i++) {
            cout << my_array[i];
            if(i < my_array.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}