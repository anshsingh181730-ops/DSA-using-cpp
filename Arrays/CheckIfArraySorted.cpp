#include<bits/stdc++.h>
using namespace std;

int Sorted(vector<int>& arr, int n) {
    for(int i = 1; i < n; i++) {
        if(arr[i - 1] <= arr[i]) {

        }
        else return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << Sorted(arr, n);
    return 0; 
}