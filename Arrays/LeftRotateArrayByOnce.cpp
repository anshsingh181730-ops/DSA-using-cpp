Problem: Left Rotate an Array by One Place
Platform: DSA Striver Sheet
Topic: Arrays
Difficulty: Easy

Optimal Approach:
Store the first element.
Shift every remaining element one position to the left.
Place the stored element at the last position.

Time Complexity: O(n)
Space Complexity: O(1)


    

#include<bits/stdc++.h>
using namespace std;
void LeftRotate(int arr[], int n) {
    int m = arr[0];
    for(int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = m;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    LeftRotate(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
