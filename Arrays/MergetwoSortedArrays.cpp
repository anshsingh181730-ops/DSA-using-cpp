#include<bits/stdc++.h>
using namespace std;

void MergeArrays(long long arr1[], long long arr2[], int n, int m) {
    int left = n - 1; 
    int right = 0;
    while(left >= 0 && right < m) {
        if(arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else {
            break;
        }
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    long long arr1[n];
    long long arr2[m];
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for(int j = 0; j < m; j++) {
        cin >> arr2[j];
    }
    MergeArrays(arr1, arr2, n, m);
    for(int i = 0; i < (n + m); i++) {
        if(i < n) {
            cout << arr1[i] << " ";
        }
        else if(i >= n) {
            cout << arr2[i - n] << " ";
        }
    }
    return 0;
}