//C++ Program to Reverse a Number using While Loop

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    int temp;
    int rev=0;
    cin>>num;
    temp=num;
    while(temp!=0){
        int rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    cout<<rev;

}
//Time complexity: O(log N)