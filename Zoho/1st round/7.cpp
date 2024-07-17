#include<bits/stdc++.h>
using namespace std;
int main(){
   int a=9,b=9;
   a=b++;
   b=a++;
   b=++b;
   cout<<a<<endl<<b;
}