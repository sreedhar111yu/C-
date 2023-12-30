#include<bits/stdc++.h>
using namespace std;

void BubbleSort(){
    // To Get the input of array size
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size; i++){
        cin>>arr[i];
    }
    //bubbel Sort
    for(int i=0;i<size; i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        } 
    }
    //output aorted array
    for(int i=0;i<size;i++){
        cout<< arr[i]<<" ";
    }
}
int main(){
    BubbleSort();
    return 0;
}
