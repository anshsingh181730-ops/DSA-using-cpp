#include<bits/stdc++.h>
using namespace std;

int Search(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] > target) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    int target;
    cin >> target;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << Search(arr, n, target);
    return 0;
}