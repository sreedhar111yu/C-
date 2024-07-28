#include <iostream>
using namespace std;

void f(int n) {
    // Base case to stop recursion
    if (n <=50 ) {
        cout<<n<<" ";
        f(n + 1);
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    f(n);
    
    return 0;
}
