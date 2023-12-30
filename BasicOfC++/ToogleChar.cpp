#include<bits/stdc++.h>
using namespace std;
int main (){
    string name;
    cin>>name;
    int len=name.length();
    for(int i=0;i<len;i++){
        if(islower(name[i])){
            name[i]=toupper(name[i]);
        }else{
            name[i]=tolower(name[i]);
        }
    }
    cout<<name;

}