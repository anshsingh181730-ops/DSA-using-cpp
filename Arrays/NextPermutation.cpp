#include<bits/stdc++.h>
using namespace std;

vector<int> NextPermutation(vector<int>& arr, int n){
    int ind = -1;
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] < arr[i + 1]) {
            ind = i;
            break;
        }
    }
    for(int i = n - 1; i > ind; i--) {
        if(arr[i] > arr[ind]) {
            swap(arr[ind], arr[i]);
            break;
        }
    }
    reverse(arr.begin() + ind + 1, arr.end());
    return arr;
}

int main() {
    int n;
    cin >> n; 
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result = NextPermutation(arr, n);
    for(auto it : result) {
        cout << it << " ";
    }
    return 0;
}