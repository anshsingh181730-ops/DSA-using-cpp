#include<bits/stdc++.h>
using namespace std;

vector<int> Leaders(vector<int>& arr, int n) {
    vector<int> ans;
    int maxi = INT_MIN;
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] > maxi) {
            ans.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result = Leaders(arr, n);
    for(auto it : result) {
        cout << it << " ";
    }
    return 0;
}