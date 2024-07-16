// Dimond pattern

#include<bits/stdc++.h>
using namespace std;

void pattern1(int size){
     for(int i=0;i<size;i++){
      
        for(int j=0;j<size-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }

        for(int j=0;j<size-i-1;j++){
            cout<<" ";
        }

        cout<<endl;

    }
}
void pattern2(int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*size-(2*i+1);k++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int size;
    cin>> size;
    pattern1(size);
    pattern2(size);

}