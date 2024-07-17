#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10;
    int b=20;

    a=++a + a++;  //a+1 == 10+1=11  +  11+1=12 == 11+12=23, a=23
    //b=++a + b++;  //23+1=24  +  20+1=21 24+

    cout<<a<<endl;
    cout<<b;
}