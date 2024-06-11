#include<bits/stdc++.h>
using namespace std;

class HumanBeing{
    public:
    string name;

    void intro(){
        cout<<"hi i'am"<<name;
    }
};

int main(){
    HumanBeing p;
    p.name="arun";
    p.intro();
    return 0;
    HumanBeing q;
    q.name="hari";
    q.intro();
}