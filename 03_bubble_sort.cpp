#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int swapCount = 0;

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapCount++;
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, array is sorted
        if (!swapped) break;
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nTotal Swaps Performed: " << swapCount << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    return 0;
}
