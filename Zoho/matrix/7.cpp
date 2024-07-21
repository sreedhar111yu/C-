//C++ Program to Find Transpose of a 3 x 3 Matrix

#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the determinant of a matrix
double determinant(vector<vector<double>>& matrix, int n) {
    double det = 0;
    
    // Base case for a 1x1 matrix
    if (n == 1) {
        return matrix[0][0];
    }

    // Base case for a 2x2 matrix
    if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }

    // For larger matrices, use recursion and cofactor expansion
    vector<vector<double>> submatrix(n, vector<double>(n));
    int sign = 1; // Alternating sign

    for (int i = 0; i < n; i++) {
        // Create a submatrix by excluding the first row and the current column
        for (int j = 1; j < n; j++) {
            int colIndex = 0;
            for (int k = 0; k < n; k++) {
                if (k == i) {
                    continue;
                }
                submatrix[j-1][colIndex] = matrix[j][k];
                colIndex++;
            }
        }

        // Recursive call for the determinant of the submatrix
        double subDet = determinant(submatrix, n - 1);
        
        // Add to the determinant with alternating sign
        det += sign * matrix[0][i] * subDet;
        sign = -sign;
    }

    return det;
}

int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    vector<vector<double>> matrix(n, vector<double>(n));

    cout << "Enter the elements of the matrix row by row:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    double det = determinant(matrix, n);
    cout << "The determinant of the matrix is: " << det << endl;

    return 0;
}
