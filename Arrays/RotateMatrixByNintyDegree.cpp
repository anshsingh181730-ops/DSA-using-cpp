#include<bits/stdc++.h>
using namespace std;

void RotateMatrix(int** arr, int n, int m) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i = 0; i < n; i++) {
        reverse(arr[i].begin(), arr[i].end());
    }
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; i < m; j++) {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    RotateMatrix(arr[n][m], n, m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; i < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}