#include <iostream>
#include <vector>
#include <algorithm> // For reverse function
using namespace std;

class Solution {
public:
    // Function to rotate an array by d elements in counter-clockwise direction
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        if (d > n) {
            d = d % n; // Normalize d if it's larger than n
        }
        reverse(arr.begin(), arr.begin() + d);   // Reverse the first d elements
        reverse(arr.begin() + d, arr.end());     // Reverse the remaining elements
        reverse(arr.begin(), arr.end());         // Reverse the whole array
    }
};

int main() {
    Solution solution;
    vector<int> arr;
    
    // Input size of the array
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    // Input number of rotations
    int d;
    cout << "Enter the number of rotations: ";
    cin >> d;

    // Rotate the array
    solution.rotateArr(arr, d);

    // Output the result
    cout << "Rotated array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
