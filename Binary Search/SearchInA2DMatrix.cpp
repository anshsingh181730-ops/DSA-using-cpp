#include<bits/stdc++.h>
using namespace std;

bool Search(vector<vector<int>> &arr, int n, int m, int target) {
    int low = 0;
    int high = (n * m) - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid / m][mid % m] == target) return true;
        else if(arr[mid / m][mid % m] < target) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}

int main() {
    int n;
    cin >> n; 
    int m; 
    cin >> m;
    int target;
    cin >> target;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i = 0; i < n; i++) {        
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    cout << Search(arr, n, m, target);
    return 0;
}