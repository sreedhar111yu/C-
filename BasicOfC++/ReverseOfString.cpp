#include<bits/stdc++.h>
using namespace std;
int main (){
    string name;
    cin>>name;
    int len=name.length();
   for (int i=len-1;i>=0;i--){
    cout<<name[i];
   }
}
//int ptr1=0,ptr2=name.length()-1;
//while(ptr1<ptr2){
// char ch = name[ptr1]; 
//name[ptr1]=name[ptr2];
//name[ptr2]=ch ;
//ptr1++ ;
//ptr2--
//}
//cout<<name;`+9