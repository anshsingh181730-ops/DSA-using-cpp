#include<bits/stdc++.h>
using namespace std;
int f(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j) {
        while(arr[i] <= arr[pivot] && i <= high) {
            i++;
        }
        while(arr[j] >= arr[pivot] && j >= low) {
            j--;
        }
        if(arr[i] < arr[j]) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}
void qs(vector<int>& arr, int low, int high) {
    if(low < high) {
        int pIndex = f(arr, low, high);
        qs(arr, low, pIndex);
        qs(arr, pIndex + 1, high);
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int low = 0;
    int high = n - 1;
    qs(arr, low, high);
    for(int i = 0 ; i < n; i++ ) {
        cout << arr[i] << " ";
    }
    return 0;
}