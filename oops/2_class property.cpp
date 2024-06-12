#include <bits/stdc++.h>
using namespace std;

class HumanBeing {
public:
    string name;

    void intro() {
        cout << "Hi, I am " << name << endl;
    }
};

int main() {
    HumanBeing p;
    p.name = "arun";
    p.intro();
    
    HumanBeing q;
    q.name = "hari";
    q.intro();
    
    return 0;
}
