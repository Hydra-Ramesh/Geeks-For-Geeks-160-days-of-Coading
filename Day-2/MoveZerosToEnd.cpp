#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        int lastNonZeroFoundAt = 0; // Keeps track of the position for non-zero elements
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != 0) {
                arr[lastNonZeroFoundAt++] = arr[i]; // Move non-zero elements forward
            }
        }
        for (int i = lastNonZeroFoundAt; i < arr.size(); i++) {
            arr[i] = 0; // Fill the rest with zeros
        }
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

    // Push zeros to the end
    solution.pushZerosToEnd(arr);

    // Output the result
    cout << "Array after pushing zeros to the end: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
