#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    
    vector<int> V(N);
    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }
    
    int out = -1;
    sort(V.begin(), V.end());
    bool flag = false;
    
    for (int i = 0; i < N; i++) {
        int a = i;
        int mine = V[a];
        int maxe = V[a];
        
        // while (i < N && i - a < K) {
        //     maxe = max(max, V[i]);
        //     mine = min(min, V[i]);
        //     if (max - min > M) {
        //         break;
        //     }
        //     i++;
        //}

        if (i - a < K) {
            flag = true;
            break;
        } else {
            out++;
        }
    }
    if (flag == false) {
        cout << out;
    } else {
        cout << "-1";
    }

    return 0;
}