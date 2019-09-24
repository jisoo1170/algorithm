#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int check = n;
    n+=1;
    while(n--) {
        for(int j=0; j <check-n; j++) {
            cout << ' ';
        }
        for(int i=0; i<n; i++) {
            cout << '*';
        }
        if (n != 0)
            cout << '\n';
    }
}