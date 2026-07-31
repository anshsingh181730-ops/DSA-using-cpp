#include<bits/stdc++.h>
using namespace std;

int LowerBound(int arr[], int n, int k) {
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] >= k) {
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int target;
    cin >> target;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << LowerBound(arr, n, target);
    return 0;
}