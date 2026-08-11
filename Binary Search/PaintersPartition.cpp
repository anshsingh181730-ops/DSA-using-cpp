#include<bits/stdc++.h>
using namespace std;

int PaintTheWall(vector<int> &arr, int time, int n, int k) {
    int countpainters = 1, sum = 0;
    for(int i = 0; i < n; i++) {
        if(sum + arr[i] > time) {
            countpainters++;
            sum = arr[i];
        }
        else {
            sum += arr[i];
        }
    }
    return countpainters <= k;
}

int sum(vector<int> &arr) {
    int sumn = 0;
    for(int i : arr) {
        sumn += i;
    }
    return sumn;
}

int paintersPartition(vector<int> &arr, int n, int k) {
    int low = *max_element(arr.begin(), arr.end());
    int high = sum(arr);
    while(low <= high) {
        int mid = (low + high) / 2;
        if(PaintTheWall(arr, mid, n, k)) {
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
    int k;
    cin >> k;
    cout << paintersPartition(arr, n, k);
    return 0;
}