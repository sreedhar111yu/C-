//. Direct Assignment
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
int* ptr1 = &a;  // ptr1 points to the address of a

int* ptr2 = ptr1;  // ptr2 points to the same address as ptr1
cout<<*ptr2<<endl<<ptr1<<endl<<a;

}