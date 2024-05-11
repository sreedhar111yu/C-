#include <iostream>
using namespace std;


void manualCar();
void autoCar();

int main() {
    int c;
    cout << "Press 1 for manual Car" << endl;
    cout << "Press 2 for Auto Car" << endl;
    cout << "Enter your choice: ";
    cin >> c;

    
    switch (c) {
        case 1:
            manualCar();
            break;
        case 2:
            autoCar();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}


void manualCar() {
    cout << "Manual Car: Turn On" << endl;
    cout << "Manual Car: Turn Off" << endl;
}


void autoCar() {
    cout << "Auto Car: Turn On" << endl;
    cout << "Auto Car: Turn Off" << endl;
}
