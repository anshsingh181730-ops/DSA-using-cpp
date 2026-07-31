#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ThreeSum(vector<int>& arr, int n, int target) {
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for(int i = 0; i < n; i++) {
        if(i > 0 && arr[i] == arr[i - 1]) continue;
        int j = i + 1;
        int k = n - 1;
        while(j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if(sum == target) {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j < k && arr[j] == arr[j - 1]) j++;
                while(j < k && arr[k] == arr[k + 1]) k--;
            }
            else if(sum < target) {
                j++;
            }
            else {
                k--;
            }
        }
    }
    return ans;
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
    vector<vector<int>> result = ThreeSum(arr, n, target);
    for(auto it : result) {
        for(int num : it) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}