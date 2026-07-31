Problem: Best Time to Buy and Sell Stock
Platform: LeetCode (#121)
Topic: Arrays
Difficulty: Easy

Optimal Approach:
- Keep track of the minimum stock price seen so far.
- Calculate the profit at each day.
- Update the maximum profit whenever a better profit is found.

Time Complexity: O(n)
Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

void BuyAndSellStocks(int arr[], int n) {
    int mini = arr[0], profit = 0;
    for(int i = 1; i < n; i++) {
        int cost = arr[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, arr[i]);
    }
    cout << "Best Time to buy the stock: " << mini << endl;
    cout << "Best Time to sell the stock: " << (mini + profit) << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    BuyAndSellStocks(arr, n);
    return 0;
}
