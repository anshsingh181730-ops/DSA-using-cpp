#include<bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> &arr, int n, int k) {
    int low = 0;
    int high = n - 1;
    int first = -1;
    while(low <= high) {
        int mid = (low + high)/ 2;
        if(arr[mid] == k) {
            first = mid;
            high = mid - 1;
        }
        else if(arr[mid] < k) low = mid + 1;
        else high = mid - 1;
    }
    return first;
}

int lastOccurence(vector<int> &arr, int n, int k) {
    int low = 0;
    int high = n - 1;
    int last = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == k) {
            last = mid;
            low = mid + 1;
        }
        else if(arr[mid] < k) low = mid + 1;
        else high = mid - 1;
    }
    return last;
}

pair<int, int> FirstAndLastOccurence(vector<int> &arr, int n, int k) {
    int first = firstOccurence(arr, n, k);
    if(first == -1) return {-1, -1};
    int last = lastOccurence(arr, n, k);
    return {first, last};
}

int CountOccurence(vector<int> &arr, int n, int target) {
    pair<int, int> ans = FirstAndLastOccurence(arr, n, target);
    if(ans.first == -1) return 0;
    return ans.second - ans.first + 1;
}

int main() {
    int n;
    cin >> n; 
    int target;
    cin >> target;
    vector<int> arr(n);
    for(int i = 0; i  < n; i++) {
        cin >> arr[i];
    }
    cout << CountOccurence(arr, n, target);
    return 0;
}