#include<bits/stdc++.h>
using namespace std;

int FindSqrt(int n) {
    int low = 1;
    int high = n;
    int ans = 0;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(mid * mid > n) {
            high = mid - 1;
        }
        else if(mid * mid <= n){
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << FindSqrt(n);
    return 0;
}