#include <iostream>
using namespace std;

int findLargest(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool isLargest = true;
        for (int j = 0; j < n; j++) {
            if (arr[j] > arr[i]) {
                isLargest = false;
                break;
            }
        }
        if (isLargest) return arr[i];
    }
    return -1; // Edge case: If the array is empty
}

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Largest element is: " << findLargest(arr, n) << endl;

    return 0;
}
