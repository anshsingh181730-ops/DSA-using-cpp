#include<bits/stdc++.h>
using namespace std;

int MinInArray(int arr[], int n) {
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;
    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[low] == arr[mid] && arr[mid] == arr[high]) {
            low++, high--;
            continue;
        }
        
        if(arr[low] <= arr[high]) {
            ans = min(ans, arr[low]);
            break;
        }

        if(arr[low] <= arr[mid]) {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }

        else {
            high = mid - 1;
            ans = min(ans, arr[mid]);
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << MinInArray(arr, n);
    return 0;
}