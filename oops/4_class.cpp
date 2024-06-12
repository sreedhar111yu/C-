#include <bits/stdc++.h>
using namespace std;
//scope resolution opreator ::
class Human{
   public:
         string name;
         void intro();

};
 void Human :: intro(){
    cout<<Human::name<<endl;
 }
 int main(){
    Human A;
    A.name="sreedhar";
    A.intro();
    return 0;

 }

 //op sreedhar