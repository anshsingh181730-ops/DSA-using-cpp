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