#include<bits/stdc++.h>
using namespace std;

int Armstrong(int n) {
    int m = n;
    int sum = 0;
    while(n > 0) {
        int last = n % 10;
        sum += (last * last * last);
        n /= 10;
    }
    if(m == sum) return true;
    return false;
}
int main() {
    int n;
    cin >> n;
    cout << Armstrong(n);
    return 0;
}