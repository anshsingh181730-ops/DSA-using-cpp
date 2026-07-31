#include<bits/stdc++.h>
using namespace std;

void star(int n) {
    for(int i = n; i >= 1; i--) {
        for(char j = 'A'; j < 'A' + i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// void star1(int n) {
//     for(int i = 1; i <= n; i++) {
//         for(char j = 'A'; j < 'A' + (n - i + 1); j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// } 

int main() {
    int n;
    cin >> n;
    star(n);
    // star1(n);
    return 0;
}