//Median of 2 Sorted Arrays of Different Sizes

#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"size: ";
    int size1;
    cin>>size1;

    cout<<"size2: ";
    int size2;
    cin>>size2;

    vector<int>arr1(size1);
    for(int i=0;i<size1;i++){
      cin>>arr1[i];
    }
    vector<int>arr2(size2);
    for(int j=0;j<size2;j++){
        cin>>arr2[j];
    }

    vector<int>comb;
    comb.insert(comb.end(),arr1.begin(),arr1.end());
    comb.insert(comb.end(),arr2.begin(),arr2.end());

    sort(comb.begin(),comb.end());
    for(int k:comb){
        cout<<k<<" ";
        
    }
    int tolsize=comb.size();
    double median;
    if(tolsize%2==0){
     median=(comb[tolsize/2-1]+comb[tolsize/2])/2;
    }
    else{
        median=comb[tolsize/2];
    }
    cout<<"\n"<<median<<endl;
    

    



}