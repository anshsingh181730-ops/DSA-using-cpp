#include<bits/stdc++.h>
using namespace std;

int FindCows(vector<int> &arr, int mid, int n, int cows) {
    int CountCows = 1, last = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] - last >= mid) {
            CountCows++;
            last = arr[i];
        }
    }
    return CountCows >= cows;
}

int AggresiveCows(vector<int> &arr, int n, int cows) {
    sort(arr.begin(), arr.end());
    int low = 1;
    int high = arr[n - 1] - arr[0];
    while(low <= high) {
        int mid = (low + high) / 2;
        if(FindCows(arr, mid, n, cows)) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return high;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cows;
    cin >> cows;
    cout << AggresiveCows(arr, n, cows);
    return 0;
}