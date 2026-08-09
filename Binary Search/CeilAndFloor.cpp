#include<bits/stdc++.h>
using namespace std;

vector<int> FloorAndCeil(vector<int> &arr, int n, int target) {
    int low = 0, high = n - 1;
    int floor = -1, ceil = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) {
            floor = arr[mid];
            ceil = arr[mid];
        }
        else if(arr[mid] < target) {
            floor = arr[mid];
            low = mid + 1;
        }
        else {
            ceil = arr[mid];
            high = mid - 1;
        }
    }
    return {floor, ceil};
}

int main() {
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result = FloorAndCeil(arr, n, target);
    for(auto it : result) {
        cout << it;
    }
    return 0;
}