#include <iostream>
using namespace std;

void findFrequency(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == -1) continue; // Skip already counted elements

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // Mark counted elements
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

int main() {
    int arr[] = {2, 3, 2, 3, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    findFrequency(arr, n);

    return 0;
}
