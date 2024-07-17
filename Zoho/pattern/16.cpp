
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int  space=2*(size-1);
    for(int i=1;i<=size;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int k=1;k<=space;k++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;

    }

}

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321