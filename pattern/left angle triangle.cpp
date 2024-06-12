#include<bits/stdc++.h>
using namespace std;
int main(){
    int noOfrow=5;
    for(int row=1;row<=noOfrow;row++){
        cout<<setfill(' ') <<setw(2* (noOfrow-row))<<"";
        for(int col=1;col<=row;col++){
            cout<<("* ");
        }
        cout<<"\n";
    }
}