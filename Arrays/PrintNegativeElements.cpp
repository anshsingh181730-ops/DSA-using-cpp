#include<bits/stdc++.h>
using namespace std;
void PrintNegativeEle(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    PrintNegativeEle(arr, n);
    return 0;
}