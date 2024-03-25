#include<bits/stdc++.h>
using namespace std;
int main (){
    string ch;
    cin>>ch;

    int len=ch.length();
    bool isPail =true;

    for(int i=0;i<len/2;i++){
        if(ch[i]!= ch[len-1-i]){
            isPail=false;
            break;                                                                                                    
        }
    }
    if(isPail){
        cout<<"its pal";

    }
    else{
        cout<<"its not pal";
    }
}