#include<bits/stdc++.h>
using namespace std;

bool robot(string moves){
    int x=0;
    int y=0;
    for(int i=0;i<moves.size();i++){
        if(moves[i]=='U'){
            y++;
        }
        else if(moves[i]=='D'){
            y--;
        }
        if(moves[i]=='L'){
            x--;
        }
        else{
            x++;
        }
    }
    if(x==0 && y==0){
        return true;
    }
    else{
        return false;
    }
    return 0;
}