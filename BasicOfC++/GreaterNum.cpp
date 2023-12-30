#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2,num3;
    cin>> num1 >> num2 >> num3;
    if(num1>num2 && num1>num3){
        cout<<"1st greater " <<num1;
    }
    else if(num2>num1,num2>num3){
        cout<<"2nd greater "<<num2;
    }
    else{
        cout<<"3rd greater "<<num3;
    }
}

