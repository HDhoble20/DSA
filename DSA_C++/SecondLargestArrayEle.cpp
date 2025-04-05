#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int n) {
    int firstMax = arr[0];

    // Find the maximum element
    for (int i = 1; i < n; i++) {
        if (arr[i] > firstMax) {
            firstMax = arr[i];
        }
    }

    int secondMax = -1; // Assuming all elements are positive
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondMax && arr[i] < firstMax) {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

int main() {
    int arr[] = {10, 20, 4, 45, 99, 99};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, n);
    if (secondLargest == -1)
        cout << "No second largest element found";
    else
        cout << "Second largest element is: " << secondLargest << endl;

    return 0;
}
