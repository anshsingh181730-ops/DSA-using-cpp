Problem: Find the Element That Appears Once
Platform: LeetCode (#136)
Topic: Arrays, Bit Manipulation
Difficulty: Easy

Optimal Approach:
XOR all elements of the array.
Equal elements cancel each other because x ^ x = 0.
The remaining value is the element that appears once.

Time Complexity: O(n)
Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int elementoccuronce(int arr[], int n) {
    int XORR = arr[0];
    for(int i = 1; i < n; i++) {
        XORR = XORR ^ arr[i];
    }
    return XORR;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << elementoccuronce(arr, n);

    return 0;
}
