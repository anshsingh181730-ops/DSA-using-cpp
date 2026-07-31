#include<bits/stdc++.h>
using namespace std;

// If array contains 0 

int missing(int arr[], int n) {
    int XORR1 = 0;
    int XORR2 = 0;
    for(int i = 0; i <= n - 1; i++) {
        XORR1 = XORR1 ^ i;
        XORR2 = XORR2 ^ arr[i];
    }
    XORR1 = XORR1 ^ n;
    return XORR1 ^ XORR2;
}

// If array don't contains 0 
// int missig(int arr[], int n) {
//     int XORR1 = 0;
//     int XORR2 = 0;
//     for(int i = 0; i < n - 1; i++) {
//         XORR1 = XORR1 ^ i + 1;
//         XORR2 = XORR2 ^ arr[i];
//     }
//     XORR1 = XORR1 ^ n;
//     return XORR1 ^ XORR2;
// }
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << missing(arr, n);
    return 0;
}