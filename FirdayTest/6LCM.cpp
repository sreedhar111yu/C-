#include<bits/stdc++.h>
using namespace std;
int main(){
    int no1;
    int no2;
    cin>>no1>>no2;
    int max=(no1>no2)?no1:no2;
    while(true){
        if(max%no1==0 && max%no2){
            cout<<no1<<"and" <<no2;
            break;
        }
        max++;
    }
    cout<<"lcm is:"<<max;


}