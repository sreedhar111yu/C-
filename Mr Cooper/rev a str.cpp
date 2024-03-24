#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin>>name;

    int len = name.length();
    for(int i=len-1;i>=0;i--){
        cout<<name[i];
    }
}