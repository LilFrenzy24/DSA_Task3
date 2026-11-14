// Representing a Sparse Matrix Using Arrays

#include <iostream>
using namespace std;

int main() {
    // Original 4x4 Sparse Matrix
    int sparseMatrix[4][4] = {
        {0, 0, 3, 0},
        {0, 4, 0, 0},
        {0, 0, 0, 5},
        {6, 0, 0, 0}
    };

    int nonZeros = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (sparseMatrix[i][j] != 0)
                nonZeros++;

    // Compact representation: 3 columns (Row, Column, Value)
    int compactMatrix[3][nonZeros];
    int k = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (sparseMatrix[i][j] != 0) {
                compactMatrix[0][k] = i;
                compactMatrix[1][k] = j;
                compactMatrix[2][k] = sparseMatrix[i][j];
                k++;
            }
        }
    }

    cout << "Sparse Matrix Representation (Row, Column, Value):\n";
    cout << "Row:    ";
    for (int i = 0; i < nonZeros; i++) cout << compactMatrix[0][i] << " ";
    cout << "\nCol:    ";
    for (int i = 0; i < nonZeros; i++) cout << compactMatrix[1][i] << " ";
    cout << "\nValue:  ";
    for (int i = 0; i < nonZeros; i++) cout << compactMatrix[2][i] << " ";
    cout << "\n";

    return 0;
}