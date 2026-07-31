#include<bits/stdc++.h>
using namespace std;

// string twoSum(vector<int>& arr, int n, int target) {
//     int left = 0, right = n - 1;
//     sort(arr.begin(), arr.end());
//     while (left < right) {
//         int sum = arr[left] + arr[right];
//         if(sum == target) {
//             return "YES";
//         }
//         else if(sum < target) left++;
//         else right--;
//     }
//     return "NO";
// }

vector<int> twoSum(vector<int>& arr, int n, int target) {
    vector<int> ans;
    for(int i = 0; i < n; i++) {
        ans.push_back(arr[i]);
    }
    sort(ans.begin(), ans.end());
    int left = 0;
    int right = n - 1;
    while(left < right) {
        int sum = ans[left] + ans[right];
        if(sum == target) {
            return {left, right};
        }
        else if(sum < target) left++;
        else right--;
    }
    return {};
}

int main() {
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result = twoSum(arr, n, target);
    for(auto it : result) {
        cout << it << " ";
    }
    return 0;
}