#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    
    for (int i = 0; i < 2 * size - 1; i++) {
        int numStars = i < size ? i : 2 * size - 2 - i; 
        for (int j = 0; j <= numStars; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}


// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

//outer loop 2*n-1
//if condition 2*n-i