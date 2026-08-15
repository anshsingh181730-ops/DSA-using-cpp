#include<bits/stdc++.h>
using namespace std;

double Median(vector<int> &arr1, vector<int> &arr2) {
    if(arr1.size() > arr2.size()) {
        return Median(arr2, arr1);
    }
    int n = arr1.size();
    int m = arr2.size();
    int low = 0;
    int high = n;
    int half = (n + m + 1) / 2;
    while(low <= high) {
        int cut1 = (low + high) / 2;
        int cut2 = (half - cut1);
        int left1, right1, left2, right2;
        if(cut1 == 0) {
            left1 = INT_MIN;
        }
        else {
            left1 = arr1[cut1 - 1];
        }
        if(cut1 == n) {
            right1 = INT_MAX;
        }
        else {
            right1 = arr1[cut1];
        }
        if(cut2 == 0) {
            left2 = INT_MIN;
        }
        else {
            left2 = arr2[cut2 - 1];
        }
        if(cut2 == m) {
            right2 = INT_MAX;
        }
        else {
            right2 = arr2[cut2];
        }
        if(left1 <= right2 && left2 <= right1) {
            if((n + m) % 2 == 1) {
                return max(left1, left2);
            }
            return (max(left1, left2) + min(right1, right2)) / 2.0;
        }
        else if(left1 > right2) {
            high = cut1 - 1;
        }
        else {
            low = cut1 + 1;
        }
    }
    return 0.0;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr1(n);
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    vector<int> arr2(m);
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    cout << Median(arr1, arr2);
    return 0;
}