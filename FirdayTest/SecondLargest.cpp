#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min=-1;
    for(int i=0;i<size;i++){
            if(arr[i]>max){
                min=max;
                max=arr[i];
            }else if(arr[i]>min && arr[i]!=max){
                min=arr[i];
            }
        }
        cout<<max;
        cout<<min;
}