
#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d) {
    int temp[d];

    // Step 1: Copy first d elements to temp
    for (int i = 0; i < d; i++)
        temp[i] = arr[i];

    // Step 2: Shift the rest to the left
    for (int i = d; i < n; i++)
        arr[i - d] = arr[i];

    // Step 3: Put temp[] elements at the end
    for (int i = 0; i < d; i++)
        arr[n - d + i] = temp[i];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int d = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    leftRotate(arr, n, d);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
