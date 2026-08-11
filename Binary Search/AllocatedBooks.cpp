#include<bits/stdc++.h>
using namespace std;

int Allocate(vector<int> &arr, int pages, int n, int student) {
    int countstudent = 1, sum = 0;
    for(int i = 0; i < n; i++) {
        if(sum + arr[i] > pages) {
            countstudent++;
            sum = arr[i];
        }
        else {
            sum += arr[i];
        }
    }
    return countstudent <= student;
}

int sum(vector<int> &arr) {
    int sumn = 0;
    for(int i : arr) {
        sumn += i;
    }
    return sumn;
}

int AllocateBooks(vector<int> &arr, int n, int student) {
    int low = *min_element(arr.begin(), arr.end());
    int high = sum(arr);
    while(low <= high) {
        int mid = (low + high) / 2;
        if(Allocate(arr, mid, n, student)) {
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
    int student;
    cin >> student;
    cout << AllocateBooks(arr, n, student);
    return 0;
}