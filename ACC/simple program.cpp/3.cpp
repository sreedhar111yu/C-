//Sum of Digits Program in C++

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum=0;
    while(num!=0){
        sum=sum+num%10;
        num=num/10;
    }
    cout<<sum;

}