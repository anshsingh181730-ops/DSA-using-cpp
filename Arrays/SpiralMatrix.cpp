#include<bits/stdc++.h>
using namespace std;
vector<int> Spiral(vector<int> arr, int n, int m) {
    int left = 0, right = n - 1;
    int top = 0, bottom = m - 1;
    vector<int> ans;
    while(left <= right && top <= bottom) {
        for(int i = left; i <= right; i++) {
            ans.push_back(arr[top][i]);
        }
        top++;
        for(int i = top; i <= bottom; i++) {
            ans.push_back(arr[i][right]);
        }
        right--;
        if(top <= bottom) {
            for(int i = right; i >= left; i--) {
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> arr(n),(m);
    vector<int> result = Spiral(arr, n, m);
    for(auto it : result) {
        cout << it << " ";
    }
    return 0;
}