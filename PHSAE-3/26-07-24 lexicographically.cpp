#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int n=str1.size();
    int m=str2.size();
    int maxi=max(n,m);
    for(int i=0;i<n;i++)
    {
        str1[i]=tolower(str1[i]);
    }
    for(int i=0;i<m;i++)
    {
        str2[i]=tolower(str2[i]);
    }
    for(int i=0;i<maxi;i++)
    {
        if(str1[i]!=str2[i])
        {
            cout<<int(str1[i])-int(str2[i]);
           
            break;
        }
    }

}