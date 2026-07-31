#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& arr) {
    int n = arr.size();
    int ans =  INT_MIN;
    int preProd = 1;
    int sufProd = 1;
    for(int i = 0; i < n; i++) {
        if(preProd <= 0) {
            preProd = 1;
        }
        if(sufProd <= 0) {
            sufProd = 1;
        }
        preProd *= arr[i];
        sufProd *= arr[n - i - 1];
    }
    ans = max(ans, max(preProd, sufProd));
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << maxProduct(arr);
    return 0;
}