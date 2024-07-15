//C++ Program to Check if a Number is an Adam Number
// A number when squared, reversed, its root is found and is reversed again is equal to the original number, then it is called an Adam number.

#include<bits/stdc++.h>
using namespace std;
int main(){
   int num;
   cin>>num;
   int rev=0;
   int strev=0;

   int sq=num*num;
   while(sq!=0){
    int rem=sq%10;
    rev=rev*10+rem;
    sq/=10;
   }

   int sqroot=sqrt(rev);
   while(sqroot!=0){
    int remin=sqroot%10;
    strev=strev*10+remin;
    sqroot/=10;
   }
   if(strev==num){
    cout<<"is Adam";
   }
   else{
    cout<<"not adam ";
   }

}