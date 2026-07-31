#include<bits/stdc++.h>
using namespace std;

void Remove(vector<int>& arr, int n) {
    int i = 0;
    int count = 1;
    for(int j = 1; j < n; j++) {
        if(arr[i] != arr[j]) {
            arr[i + 1] = arr[j];
            count++;
            i++;
        }
    }
    for(int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Remove(arr, n);
    return 0;
}