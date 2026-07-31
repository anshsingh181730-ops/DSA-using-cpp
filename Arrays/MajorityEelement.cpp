#include<bits/stdc++.h>
using namespace std;

int Majority(int arr[], int n) {
    int cnt = 0;
    int el = 0;
    for(int i = 0; i < n; i++) {
        if(cnt == 0) {
            cnt = 1;
            el = arr[i];
        }
        else if(el == arr[i]) {
            cnt++;
        }
        else cnt--;
    }
    int cnt1 = 0;
    for(int i = 0; i < n; i++) {
        if(el == arr[i]) {
            cnt1++;
        }
        if(cnt1 > (n /  2)) {
            return el;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n; 
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << Majority(arr, n);
    return 0;
}