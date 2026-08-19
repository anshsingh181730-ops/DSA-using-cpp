#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int x) {
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = n;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}

int Max1s(vector<vector<int>> arr, int n, int m) {
    int count = 0;
    int maxi = 0;
    for(int i = 0; i <  n; i++) {
        count = m - lowerBound(arr[i], 1);
        maxi = max(count, maxi);
    }
    return maxi;
}

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m; 
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    cout << Max1s(arr, n, m);
    return 0;
}