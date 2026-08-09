Problem: Check if an Array Is Sorted
Platform: DSA Striver Sheet
Topic: Arrays
Difficulty: Easy

Optimal Approach:
Traverse the array from left to right.
Compare every element with the previous element.
If any previous element is greater than the current element, the array is not sorted.
If no such pair exists, the array is sorted.

Time Complexity: O(n)
Space Complexity: O(1)
    
#include<bits/stdc++.h>
using namespace std;

int Sorted(vector<int>& arr, int n) {
    for(int i = 1; i < n; i++) {
        if(arr[i - 1] <= arr[i]) {

        }
        else return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << Sorted(arr, n);
    return 0; 
}
