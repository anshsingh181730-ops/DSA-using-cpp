Problem: Longest Consecutive Sequence
Platform: LeetCode (#128)
Topic: Arrays, Hashing
Difficulty: Medium

Optimal Approach:
Store all elements in an unordered set.
Start a sequence only when x - 1 does not exist.
Continue checking x + 1, x + 2, etc.
Keep track of the longest sequence.

Time Complexity: O(n) average
Space Complexity: O(n)


    

#include<bits/stdc++.h>
using namespace std;
int Sequence(int arr[], int n) {
    if(n == 0) return 0;
    int longest = 1;
    unordered_set<int> st;
    for(int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }
    for(auto it : st) {
        if(st.find(it - 1) == st.end()) {
            int cnt = 1;
            int x = it;
            while(st.find(x + 1) != st.end()) {
                x = x + 1;
                cnt += 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << Sequence(arr, n);
    return 0;
}
