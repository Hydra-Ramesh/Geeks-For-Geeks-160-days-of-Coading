#include <iostream>
#include <vector>
#include <algorithm> // For reverse and swap

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int idx = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                idx = i;
                break;
            }
        }
        if (idx == -1) {
            reverse(arr.begin(), arr.end());
            return;
        }
        for (int i = n - 1; i > idx; i--) {
            if (arr[i] > arr[idx]) {
                swap(arr[i], arr[idx]);
                break;
            }
        }
        reverse(arr.begin() + idx + 1, arr.end());
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 2, 3}; // Example input

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    solution.nextPermutation(arr);

    cout << "Next permutation: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
