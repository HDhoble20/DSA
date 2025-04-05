#include <iostream>
using namespace std;

void boundaryTraversal(int mat[3][3], int row, int col) {
    // Top row
    for (int i = 0; i < col; i++)
        cout << mat[0][i];

    // Right column
    for (int i = 1; i < row; i++)
        cout << mat[i][col - 1];

    // Bottom row (right to left)
    for (int i = col - 2; i >= 0; i--)
        cout << mat[row - 1][i];

    // Left column (bottom to top)
    for (int i = row - 2; i >= 1; i--)
        cout << mat[i][0];
}

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    boundaryTraversal(mat, 3, 3);
    return 0;
}
