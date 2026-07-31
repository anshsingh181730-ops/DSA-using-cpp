#include<bits/stdc++.h>
using namespace std;
// vector<int> Majority(vector<int>& arr, int n) {
//     int cnt1 = 0, cnt2 = 0;
//     int el1 = INT_MIN;
//     int el2 = INT_MIN;
//     for(int i = 0; i < n; i++) {
//         if(cnt1 == 0 && el2 != arr[i]) {
//             cnt1 = 1;
//             el1 = arr[i];
//         }
//         else if(cnt2 == 0 && el1 != arr[i]) {
//             cnt2 = 1;
//             el2 = arr[i];
//         }
//         else if(el1 == arr[i]) cnt1++;
//         else if(el2 == arr[i]) cnt2++;
//         else {
//             cnt1--;
//             cnt2--;
//         }
//     }
//     cnt1 = 0, cnt2 = 0;
//     vector<int> ls;
//     int mini = (int)(n / 3) + 1;
//     for(int i = 0; i < n; i++) {
//         if(el1 == arr[i]) cnt1++;
//         if(el2 == arr[i]) cnt2++;
//     }
//     if(cnt1 >= mini) ls.push_back(el1);
//     if(cnt2 >= mini) ls.push_back(el2);
//     sort(ls.begin(), ls.end());
//     return ls;
// }

vector<int> Majority(vector<int>& arr, int n) {
    vector<int> ls;
    map<int, int> mpp;
    int mini = (int)(n / 3) + 1;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
        if(mpp[arr[i]] == mini) {
            ls.push_back(arr[i]);
        }
        if(ls.size() == 2) break;
    }
    sort(ls.begin(), ls.end());
    return ls;
}


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result = Majority(arr, n);
    for(auto it : result) {
        cout << it << " ";
    }
    return 0;
}