#include<bits/stdc++.h>
using namespace std;
int main (){
    int year;
    cin>>year;
    if(year%4==0){
        if((year%400==0) || (year%100!=0)){
            cout<<"leapyear";
        }
        else{
            cout<<"not  leapyear";
        }
    }else {
        cout<<"not a leapyear";
    }

}