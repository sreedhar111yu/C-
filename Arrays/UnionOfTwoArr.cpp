//#include<bits/stdc++.h>
//using namespace std;
//int main (){
//    int arr1[]={1,2,3,4,5,6};
//    int arr2[]={2,1,5,7,9,8};
//    int size1=sizeof(arr1)/sizeof(arr1[0]);
//    int size2=sizeof(arr2)/sizeof(arr2[0]);
//
//    sort(arr1.begin(),arr1.end())
//    sort(arr2.begin(),arr2.end())
//
//    set<int>st;
//    for(int i=0;i<arr1.size();i++){
//        st.insert(arr1[i]);
//    }
//    for(int j=0;j<arr2.size();i++){
//        st.insert(arr2[j])
//    }
//    vector<int>ans;
//    for(auto it=st){
//        ans.push_back(it);
//    }
//
//}
//
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {2, 1, 5, 7, 9, 8};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    sort(arr1, arr1 + size1);
    sort(arr2, arr2 + size2);

    set<int> st;
    for (int i = 0; i < size1; i++) {
        st.insert(arr1[i]);
    }
    for (int j = 0; j < size2; j++) {
        st.insert(arr2[j]);
    }

    vector<int> ans;
    for (auto it = st.begin(); it != st.end(); ++it) {
        ans.push_back(*it);
    }

    // Printing the merged and sorted array without duplicates
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
























