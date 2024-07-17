#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    for (int i = 0; i <= size; i++) {
        // Print leading spaces for alignment
        for (int j = 0; j < size - i; j++) {
            cout << " ";
        }

        // Initialize the character to 'A'
        char ch = 'A';
        // Calculate the middle point
        int bc = (2 * i + 1) / 2;

        // Print characters in the row
        for (int k = 0; k <= 2 * i; k++) {
            cout <<ch;
            // Increment or decrement character
            if (k < bc) ch++;
            else ch--;
        }
        // Move to the next line
        cout << endl;
    }

    return 0;
}

//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA
// ABCDEFEDCBA