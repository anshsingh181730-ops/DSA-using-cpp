#include<bits/stdc++.h>
using namespace std;

int ArrayIsSorted(int arr[], int n) {
    int low = 0;
    int high = n - 1;
    int idx = -1;
    int ans = INT_MAX;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[low] <= arr[high]) {
            if(arr[low] < ans) {
                idx = low;
                ans = arr[low];
                break;
            }
        }
        if(arr[low] <= arr[mid]) {
            if(arr[low] < ans) {
                idx = low;
                ans = arr[low];
            }
            else low = mid + 1;
        }
        else {
            high = mid - 1;
            if(arr[mid] < ans) {
                idx = mid;
                ans = arr[mid];
            }
        }
    }
    return idx;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << ArrayIsSorted(arr, n);
    return 0;
}