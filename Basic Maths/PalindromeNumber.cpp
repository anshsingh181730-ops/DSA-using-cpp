#include<bits/stdc++.h>
using namespace std;

bool Palindrome(int n) {
    int m = n;
    int rev = 0;
    while(n > 0) {
        int last = n % 10;
        rev = rev * 10 + last;
        n = n / 10;
    }
    if(m == rev) return true;
    return false;
}
int main() {
    int n;
    cin >> n;
    cout << Palindrome(n);
    return 0;
}