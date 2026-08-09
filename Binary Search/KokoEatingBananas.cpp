#include<bits/stdc++.h>
using namespace std;

long long CalculateTotalHours(vector<int> &arr, int n, int mid,  int h) {
    int totalH = 0;
    for(int i = 0; i < n; i++) {
        totalH += ceil((double)arr[i] / (double)mid);
    }
    return totalH;
}

int FindHours(vector<int> &arr, int n, int h) {
    int low = 1;
    int high = *max_element(arr.begin() , arr.end());
    while(low <= high) {
        int mid = (low + high) / 2;
        int totalH = CalculateTotalHours(arr, n, mid, h);
        if(totalH <= h) {
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
    int h;
    cin >> h;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << FindHours(arr, n, h);
    return 0;
}