#include<bits/stdc++.h>
using namespace std;
// vector < int >  Union(vector<int>& a, vector<int>& b) {
//     int i = 0; 
//     int j = 0;
//     int n1 = a.size();
//     int n2 = b.size();
//     vector<int> UnionArr;
//     while(i < n1 && j < n2) {
//         if(a[i] <= b[j]) {
//             if(UnionArr.size() == 0 || UnionArr.back() != a[i]) {
//                 UnionArr.push_back(a[i]);
//             }
//             i++;
//         }
//         else {
//             if(UnionArr.size() == 0 || UnionArr.back() != b[j]) {
//                 UnionArr.push_back(b[j]);
//             }
//             j++;
//         }
//     }
//     while(i < n1) {
//         if(UnionArr.size() == 0 || UnionArr.back() != a[i]) {
//                 UnionArr.push_back(a[i]);
//             }
//         i++;
//     }
//     while(j < n2) {
//         if(UnionArr.size() == 0 || UnionArr.back() != b[j]) {
//                 UnionArr.push_back(b[j]);
//             }
//         j++;
//     }
//     return UnionArr;
// }

vector<int> Union(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int m = b.size();
    vector<int> UnionArr;
    int i = 0 , j = 0;
    while(i < n && j < m) {
        if(a[i] <= b[j]) {
            if(UnionArr.size() == 0 || UnionArr.back() != a[i]) {
                UnionArr.push_back(a[i]);
            }
            i++;
        }
        else {
            if(UnionArr.size() == 0 || UnionArr.back() != b[j]) {
                UnionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(i < n) {
            if(UnionArr.size() == 0 || UnionArr.back() != a[i]) {
                UnionArr.push_back(a[i]);
            }
            i++;
    }
    while(j < m) {
            if(UnionArr.size() == 0 || UnionArr.back() != b[j]) {
                UnionArr.push_back(b[j]);
            }
            j++;
    }
    return UnionArr;
}

int main() {
    int n1;
    cin >> n1;
    vector<int> arr1(n1);
    for(int i = 0; i < n1;  i++) {
        cin >> arr1[i];
    }
    int n2;
    cin >> n2;
    vector<int> arr2(n2);
    for(int i = 0; i < n2;  i++) {
        cin >> arr2[i];
    }
    vector<int> result = Union(arr1, arr2);
    for(auto it : result) {
        cout << it << " ";
    }
    return 0;
}