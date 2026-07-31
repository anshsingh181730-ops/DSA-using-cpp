#include<bits/stdc++.h>
using namespace std;

void star(int n) {
    for(int i = 1; i <= n; i++) {
        int num = 1;
        if(i % 2 == 0) num = 0;
        else num = 1;
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num = 1 - num;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    star(n);
    return 0;
}

