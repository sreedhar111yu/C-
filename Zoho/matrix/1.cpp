#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    
    int matrix1[rows][cols];

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            
            cin >> matrix1[i][j];
        }
    }

 

   

    
    cout << "Sum of the matrices:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout <<matrix1[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}

// Sum of the matrices:
// 1 2
// 3 4