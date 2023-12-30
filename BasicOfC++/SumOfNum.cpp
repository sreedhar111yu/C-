#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum=0;
    while(num>0){
        int remainder=num%10;
        sum=sum+remainder;
        num= num/10;
    }
    cout<<sum;
}
