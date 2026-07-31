#include<bits/stdc++.h>
using namespace std;

// vector<int> Rearrange(vector<int>& arr, int n) {
//     vector<int> ans(n, 0);
//     int posIndex = 0, negIndex = 1;
//     for(int i = 0; i < n; i++) {
//         if(arr[i] < 0) {
//             ans[negIndex] = arr[i];
//             negIndex += 2;
//         }
//         else {
//             ans[posIndex] = arr[i];
//             posIndex += 2;
//         }
//     }
//     return ans;
// }

vector<int> Rearrange(vector<int>& arr, int n) {
    vector<int> pos, neg;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            neg.push_back(arr[i]);
        }
        else {
            pos.push_back(arr[i]);
        }
    }
    if(pos.size() > neg.size()) {
        for(int i = 0; i < neg.size(); i++) {
            arr[2*i] = pos[i];
            arr[2*i + 1] = neg[i];
        }
        int idx = 2 * neg.size();
        for(int i = idx; i < pos.size(); i++) {
            arr[i] = pos[i];
            idx++;
        }
    }
    else {
        for(int i = 0; i < pos.size(); i++) {
            arr[2*i] = pos[i];
            arr[2*i + 1] = neg[i];
        }
        int idx = 2 * pos.size();
        for(int i = idx; i < neg.size(); i++) {
            arr[i] = neg[i];
            idx++;
        }
    }
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result = Rearrange(arr, n);
    for(auto it : result) {
        cout << it << " ";
    }
    return 0;
}