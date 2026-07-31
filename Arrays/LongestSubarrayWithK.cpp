#include<bits/stdc++.h>
using namespace std;
int subArray(vector<int>& arr, int k) {
    int right = 0;
    int left = 0;
    int n = arr.size();
    long long sum = arr[0];
    int maxlen = 0;
    while(right < n) {
        while(left <= right && sum > k) {
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxlen = max(maxlen, right - left + 1);
        }
        right++;
        if(right < n) sum += arr[right];
    }
    return maxlen;
}
int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << subArray(arr, k);
    return 0;
}