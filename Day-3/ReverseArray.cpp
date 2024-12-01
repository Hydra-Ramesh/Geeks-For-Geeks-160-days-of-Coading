#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& arr) {
        int right = arr.size() - 1;
        int left = 0;
        while (left < right) {
            swap(arr[left], arr[right]); // Swap elements at left and right pointers
            right--;
            left++;
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

    // Reverse the array
    solution.reverseArray(arr);

    // Output the result
    cout << "Reversed array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
