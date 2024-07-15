// C++ Program to Check if the Entered Year is a Leap Year

#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cin>>year;
    if(year%4==0){
        cout<<"leap year";
    }
    else{
        cout<<"not a leap year";
    }
}