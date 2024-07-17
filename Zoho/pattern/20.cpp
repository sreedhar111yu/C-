
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    

    for(int i=0;i<=size;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

// A
// B B
// C C C
// D D D D
// E E E E E
// F F F F F F