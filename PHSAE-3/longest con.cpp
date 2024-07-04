#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < size; i++) {
        st.insert(arr[i]);
    }

    for (auto it : st) {
        if (st.find(it - 1) == st.end()) {
            int count = 1;
            int x = it;
            while (st.find(x + 1) != st.end()) {
                x = x + 1;
                count = count + 1;
            }
            longest = max(longest, count);
        }
    }

    cout << longest << endl;
    return 0;
}
