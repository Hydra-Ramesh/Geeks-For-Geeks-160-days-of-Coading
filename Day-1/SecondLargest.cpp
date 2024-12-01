#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        if (arr.size() < 2) {
            return -1; // Not enough elements to determine the second largest
        }
        sort(arr.begin(), arr.end()); // Sort the array in ascending order
        int n = arr.size();

        // Traverse from the second last element to find the second largest
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] != arr[n - 1]) { // Check if it is different from the largest element
                return arr[i];
            }
        }
        return -1; // If all elements are the same
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

    // Get the second largest element
    int secondLargest = solution.getSecondLargest(arr);

    // Output the result
    if (secondLargest == -1) {
        cout << "No second largest element exists." << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}
