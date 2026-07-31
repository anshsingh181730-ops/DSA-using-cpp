#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    while(a > 0 && b > 0) {
        if( a > b) a = a % b;
        else b = b % a;
    }
    if(a == 0) return b;
    else return a;
}
int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    cout << GCD(n, m);
    return 0;
}