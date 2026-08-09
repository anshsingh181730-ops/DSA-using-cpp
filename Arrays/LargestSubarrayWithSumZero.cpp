Problem: Largest Subarray With Sum 0
Platform: GeeksforGeeks
Topic: Arrays, Hashing, Prefix Sum
Difficulty: Medium

Optimal Approach:
Maintain a prefix sum while traversing the array.
Store the first index at which each prefix sum occurs.
If the same prefix sum appears again, the elements between those indices have sum zero.
Keep track of the maximum length.

Time Complexity: O(n)
Space Complexity: O(n)


    

#include<bits/stdc++.h>
using namespace std;

int MaxSubarray(vector<int>& arr, int n) {
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
                maxi = max(maxi, i - mpp[sum]);
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
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << MaxSubarray(arr, n);
    return 0;
}
