#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Target found at index i
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {12, 45, 23, 67, 89, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 67;

    int result = linearSearch(arr, n, target);

    if (result != -1)
        cout << "Element " << target << " found at index: " << result << endl;
    else
        cout << "Element " << target << " not found in array." << endl;

    return 0;
}
