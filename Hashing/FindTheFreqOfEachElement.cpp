// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     //precompute
//     unordered_map <int, int> mpp;
//     for(int i = 0; i < n; i++) {
//         mpp[arr[i]] += 1;
//     }

//     //iteration in the map
//     // for(auto it : mpp) {
//     //     cout << it.first << "->" << it.second << endl;
//     // }

//     int q;
//     cin >> q;
//     while(q--) {
//         int number;
//         cin >> number;
//         //fetch
//         // cout << mpp[number] << endl;
//         mpp[number];
//     }

//     vector<int, int> result;
//     for(auto it : mpp) {
//         result.push_back({it.first, it.second})
//     }
//     return result;
//     return 0;
// }