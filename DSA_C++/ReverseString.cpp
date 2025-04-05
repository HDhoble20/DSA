#include <iostream>
using namespace std;

int main() {
    string str = "Hello";
    int n = str.length();

    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]); // Swap characters
    }

    cout << "Reversed string: " << str << endl;
    return 0;
}
