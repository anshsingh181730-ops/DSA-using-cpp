#include<bits/stdc++.h>
using namespace std;

// void MoveZeroBrute(int arr[], int n) {
//     int temp[];
//     for(int i = 0; i < n; i++) {
//         if(arr[i] != 0) {
//             temp.add(arr[i])
//         }
//     }
//     int nz = temp.size();
//     for(int i = 0; i < nz; i++) {
//         arr[i] = temp[i];
//     }
//     for(int i = nz; i < n; i++) {
//         arr[i] = 0;
//     }
// }

void MoveZero(int arr[], int n) {
    int j = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }
    for(int i = j + i; i < n; i++) { 
        if(arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    MoveZero(arr, n);
    // MoveZeroBrute(arr, n);
    for(int i = 0; i < n; i++) { 
        cout << arr[i] << " ";
    }
    return 0;
}