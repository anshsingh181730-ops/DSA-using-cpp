#include<bits/stdc++.h>
using namespace std;

int findBouq(vector<int> &arr, int days, int bouq, int flow) {
    int n = arr.size();
    int count = 0;
    int noofB = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= days) {
            count++;
        }
        else {
            noofB += (count / flow);
            count = 0;
        }
    }
    noofB += (count / flow);
    return noofB >= bouq;
}

int RoseGarden(vector<int> &arr, int bouq, int flow) {
    long long val = bouq * 1LL * flow * 1LL;
    if(val > arr.size()) return -1;
    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());
    while(low <= high) {
        int mid = (low + high) / 2;
        if(findBouq(arr, mid, bouq, flow)) {
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
    int m;
    cin >> m;
    int k;
    cin >> k;
    cout << RoseGarden(arr, m, k);

    return 0;
}