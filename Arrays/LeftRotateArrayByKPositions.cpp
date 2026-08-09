Problem: Left Rotate an Array by K Positions
Platform: DSA Striver Sheet
Topic: Arrays
Difficulty: Easy

Optimal Approach:
Reduce k using k % n.
Reverse the first k elements.
Reverse the remaining elements.
Reverse the complete array.

Time Complexity: O(n)
Space Complexity: O(1)


    
#include<bits/stdc++.h>
using namespace std;

void reversee(vector<int>& arr, int start, int end) {
    while(start <= end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void LeftRotate(vector<int>& arr, int k) {
    int n = arr.size();
    if(n == 0) return; // Handle empty array case
    k = k % n; // In case k is greater than n 
    reversee(arr, 0, k - 1);
    reversee(arr, k, n - 1);
    reversee(arr, 0, n - 1);
}
int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    LeftRotate(arr, k);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
