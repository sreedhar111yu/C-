
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x, c;
    cin >> n >> x >> c;
    int count = 0;
    vector<vector<int>> a(x, vector<int>(2));
    vector<int> ans(n, 0);

    for (int i = 0; i < x; i++) {
        cin >> a[i][0] >> a[i][1];
        ans[a[i][0]] += 1;
        ans[a[i][1]] += 1;
    }

    for (int i = 0; i < n; i++) {
        if (ans[i] > 1) {
            count++;
        }
    }

    cout << count * c;
    return 0;
}
