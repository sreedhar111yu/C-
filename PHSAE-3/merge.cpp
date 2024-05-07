#include<bits/stdc++.h>
using namespace std;

int main() {
    int M[] = {1, 8, 6, 5};
    int N[] = {5, 9, 66, 22};
    set<int> mergedSet;

    
    mergedSet.insert(M, M + sizeof(M) / sizeof(int));

    mergedSet.insert(N, N + sizeof(N) / sizeof(int));

    
    for (int num : mergedSet) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}