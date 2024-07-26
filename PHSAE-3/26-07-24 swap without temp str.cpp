#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"str1";
    string str1;
    cin>>str1;

    cout<<"str2";
    string str2;
    cin>>str2;

    str1=str1+str2;
    str2=str1.substr(0,str1.size()-str2.size());
    str1=str1.substr(str2.size());
    cout<<str1<<endl;
    cout<<str2;

}