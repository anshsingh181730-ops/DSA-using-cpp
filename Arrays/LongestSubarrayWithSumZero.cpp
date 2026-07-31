#include<bits/stdc++.h>
using namespace std;

int LongestSubarray(int arr[], int n) {
    int maxi = 0;
    int sum = 0;
    unordered_map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum == 0) {
            maxi = i + 1;
        }
        else {
            if(mpp.find(sum) != mpp.end()) {
                maxi = max(i - mpp[sum], maxi);
            }
            else {
                mpp[sum] = i;
            }
        }
    }
    return maxi;
}

int main() {
    int n;
    cin >> n; 
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << LongestSubarray(arr, n);
    return 0;
}