#include<bits/stdc++.h>
using namespace std;

int findFloor(int arr[], int n, int k) {
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] <= k) {
            ans = arr[mid];
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}

int findCeil(int arr[], int n, int k) {
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] >= k) {
            ans = arr[mid];
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}

pair<int, int> floorAndCeil(int arr[], int n, int k) {
    int flr = findFloor(arr, n, k);
    int ceil = findCeil(arr, n, k);
    return {flr, ceil};
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    pair<int, int> result = floorAndCeil(arr, n, k);
    cout << result.first << " " << result.second;
    return 0;
}