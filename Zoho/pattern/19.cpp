
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    

    for(int i=0;i<=size;i++){
        for(char ch='A';ch<='A'+size-i-1;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

// A B C D E 
// A B C D 
// A B C 
// A B 
// A