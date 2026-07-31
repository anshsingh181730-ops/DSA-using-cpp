#include<bits/stdc++.h>
using namespace std;

int CountSubarray(int arr[], int n, int k) {
    map<int, int> mpp;
    int xr = 0;
    mpp[xr]++;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        xr = xr ^ arr[i];
        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << CountSubarray(arr, n, k);
    return 0;
}