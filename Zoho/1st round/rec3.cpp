#include <iostream>
using namespace std;

void f(int n) {
    
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
