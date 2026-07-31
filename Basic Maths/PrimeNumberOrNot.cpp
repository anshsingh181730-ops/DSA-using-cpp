#include<bits/stdc++.h>
using namespace std;

int Prime(int n) {
    int count = 0;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) count++;
        if(i != n/i) count++;
    }
    if(count == 2) return true;
    else return false;
}
int main() {
    int n;
    cin >> n;
    cout << Prime(n);
    return 0;
}