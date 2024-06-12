#include <bits/stdc++.h>
using namespace std;
//
class Human{
    private:
    int age;
    string name;
    public:
    void disp(){
    cout<<age<<endl;
    cout<<name<<endl;   
      // within the class 
}
 void set(int value ,string nam){
    age=value;
    name=nam;

      }
};
int main(){
    Human A;
    A.set(20,"sreedhar");
    A.disp();
}

