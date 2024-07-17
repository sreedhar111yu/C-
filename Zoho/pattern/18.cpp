
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    

    for(int i=0;i<=size;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}