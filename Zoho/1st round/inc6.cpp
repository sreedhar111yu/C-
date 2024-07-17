#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=5,y=5,z;
    x=++x;
    y=--y;

    z=x++ + y--;

    cout<<x<<endl<<y<<endl<<z;
}