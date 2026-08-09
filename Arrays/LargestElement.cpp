Problem: Find the Largest Element in an Array
Platform: DSA Striver Sheet
Topic: Arrays
Difficulty: Easy

Optimal Approach:

Initialize the maximum with the first element.
Traverse the array.
Update the maximum whenever a larger element is found.

Time Complexity: O(n)
Space Complexity: O(1)



    
#include<bits/stdc++.h>
using namespace std;
void MaxElement(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout << max;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    MaxElement(arr, n);
    return 0;
}
