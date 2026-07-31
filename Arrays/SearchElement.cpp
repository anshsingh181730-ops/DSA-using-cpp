#include<bits/stdc++.h>
using namespace std;
int Search(int arr[], int n, int m) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == m) {
            return true;
        }
    }
    return false;
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
    cout << Search(arr, n, target);
    return 0;
}