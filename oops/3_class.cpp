#include <bits/stdc++.h>
using namespace std;
//object from class in different way
class HumanBeing {
public:
    string name;

    void intro() {
        cout << "Hi, I am " << name << endl;
    }
};

int main() {
    HumanBeing p;

    HumanBeing *H=new HumanBeing();
    p.name = "Leo";
    p.intro();
    
    H->name="Vikram";
    H->intro();
    
    return 0;
}
