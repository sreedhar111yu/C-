#include<bits/stdc++.h>
using namespace std;

class Main{
    int main() {
   
    manualcar mCar;
    Autocar aCar;

   
    mCar.turnOnCar();
    mCar.turnOffCar();
    cout << mCar.getCarType() << endl;

    aCar.turnOnCar();
    aCar.turnOffCar();
    cout << aCar.getCarType() << endl;

    return 0;
}

};