#include<bits/stdc++.h>
using namespace std;
int main (){
    string name="a-bc-dEf-ghIj";
    int size=name.size();
    int i=0,j=size-1;
   
    while(i<j){
         if(!isalpha(name[i])){
            i++;

    }else
        if(!isalpha(name[j])){
            j--;
        }else
        swap(name[i],name[j]);
        i++;
        j--;
    }
    return;
    
    }