#include<bits/stdc++.h>
using namespace std;

int SearchInRotatedSortedArray(int arr[], int n, int k) {
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[low] <= arr[mid]) {
            if(arr[low] <= k && k <= arr[mid]) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        else {
            if(arr[mid] <= k && k <= arr[high]) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    }
    return ans;
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
    cout << SearchInRotatedSortedArray(arr, n, k);
    return 0;
}