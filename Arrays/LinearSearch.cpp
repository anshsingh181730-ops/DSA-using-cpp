#include<bits/stdc++.h>
using namespace std;   

int linearSearch(vector<int>& arr, int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
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
    vector<int> arr(n);
    for(int i  = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << linearSearch(arr, n, target);
    return 0;
}