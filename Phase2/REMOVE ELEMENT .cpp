#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int index=0;
    int val;
    cout<<"val";
    cin>> val;

    for(int i=0;i<size;i++){
        if(arr[i]!=val){
            arr[index]=arr[i];
            index++;
        }
    }
   for(int i=0;i<size;i++){
    cout<<index++<<" ";
   }
}