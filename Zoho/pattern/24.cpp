#include<bits/stdc++.h>
using namespace std;

// void upper( int size){

   

//     for(int i=0;i<size;i++){
//         for(int j=0;j<size-i-1;j++){
//             cout<<"*";
//         }
//         for(int k=0;k<2*i+1;k++){
//             cout<<" ";
//         }
//         for(int j=0;j<size-i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

void lower(int size){

     for(int i=0;i<size;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int k=0;k<2*size-(2*i+1);k++){
            cout<<" ";
        }
         for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

int main(){
    int size;
    cin>>size;
   // upper(size);
    lower(size);
}