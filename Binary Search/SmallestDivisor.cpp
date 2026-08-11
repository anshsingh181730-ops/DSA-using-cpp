#include<bits/stdc++.h>
using namespace std;

int FindDivisor(vector<int> &arr, int div, int n, int lim) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += ceil((double)arr[i] / (double)div);
    }
    return sum <= lim;
}

int MinDivisor(vector<int> &arr, int n, int lim) {
    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());
    while(low <= high) {
        int mid = (low + high) / 2;
        if(FindDivisor(arr, mid, n, lim)) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int limit;
    cin >> limit;
    cout << MinDivisor(arr, n, limit);
    return 0;
}