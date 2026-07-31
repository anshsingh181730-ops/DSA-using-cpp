#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> FourSum(vector<int>& arr, int n, int target) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++) {
        if(i > 0 && arr[i] == arr[i - 1]) continue;
        for(int j = i + 1; j < n; j++) {
            if(j > 0 && arr[j] == arr[j - 1]) continue;
            int k = j + 1;
            int l = n - 1;
            while(k < l) {
                int sum = arr[i];
                sum += arr[j];
                sum += arr[k];
                sum += arr[l];
                if(sum < target) {
                    k++;
                }
                else if(sum > target) {
                    l--;
                }
                else {
                    ans.push_back({arr[i], arr[j], arr[k], arr[l]});
                    k++;
                    l--;
                    while(k < l && arr[k] == arr[k + 1]) k++;
                    while(k < l && arr[l] == arr[l - 1]) l--;
                }
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
    vector<vector<int>> result = FourSum(arr, n, target);
    for(auto it : result) {
        for(int num : it) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}