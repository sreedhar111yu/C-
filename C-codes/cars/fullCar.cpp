#include <iostream>
#include <string>
using namespace std;

// Base class Car
class Car {
public:
    virtual void turnOnCar() = 0;   // Pure virtual function
    virtual void turnOffCar() = 0;  // Pure virtual function
    virtual string getCarType() = 0; // Pure virtual function
};

// Derived class ManualCar
class ManualCar : public Car {
public:
    void turnOnCar() override {
        cout << "Manual Car: Turn On" << endl;
    }
    
    void turnOffCar() override {
        cout << "Manual Car: Turn Off" << endl;
    }

    string getCarType() override {
        return "Manual Car";
    }
};

// Derived class AutomaticCar
class AutomaticCar : public Car {
public:
    void turnOnCar() override {
        cout << "Automatic Car: Turn On" << endl;
    }
    
    void turnOffCar() override {
        cout << "Automatic Car: Turn Off" << endl;
    }

    string getCarType() override {
        return "Automatic Car";
    }
};

int main() {
    // Create objects of ManualCar and AutomaticCar
    ManualCar mCar;
    AutomaticCar aCar;

    // Use the objects
    mCar.turnOnCar();
    mCar.turnOffCar();
    cout << mCar.getCarType() << endl;

    aCar.turnOnCar();
    aCar.turnOffCar();
    cout << aCar.getCarType() << endl;

    return 0;
}
