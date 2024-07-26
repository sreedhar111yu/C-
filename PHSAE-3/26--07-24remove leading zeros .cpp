#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,count=0;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='0')










































































        
        {
            continue;
        }
        else{
            a=i;
            break;
        }
    }
    for(int i=a;i<str.size();i++)
    {
         cout<<str[i];
         count++;
    }
    if(count==0)
    {
        cout<<count;
    }

}