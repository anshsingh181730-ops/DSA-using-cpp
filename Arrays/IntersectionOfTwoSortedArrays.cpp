Problem: Intersection of Two Sorted Arrays
Platform: DSA Striver Sheet
Topic: Arrays, Two Pointers
Difficulty: Easy

Optimal Approach:
Use two pointers, one for each sorted array.
If elements are equal, add the element to the result.
Move the pointer pointing to the smaller element.
Continue until one array is completely traversed.

Time Complexity: O(n + m)
Space Complexity: O(1) excluding output space



#include<bits/stdc++.h>
using namespace std;
vector<int> Intersection(vector<int>& a, vector<int>& b, int n, int m) {
    int i = 0; 
    int j = 0;
    vector<int> ans;
    while(i < n && j < m) {
        if(a[i] < b[j]) {
            i++;
        }
        else if(b[j] < a[i]) {
            j++;
        }
        else {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr1(n);
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    vector<int> arr2(m);
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    vector<int> result = Intersection(arr1, arr2, n, m);
    for(auto it : result) {
        cout << it << " ";
    }
    return 0;
}
