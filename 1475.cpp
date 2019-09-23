#include <bits/stdc++.h>
using namespace std;

int main() {  
    ios::sync_with_stdio(0);
    cin.tie(0);

    string num;
    cin >> num;

    int count[10] = {};

    for(auto n:num) {
        count[n-'0']++;
    }

    int max=0;

    count[6] = ceil((count[6] + count[9])/2.0);

    for(int i=0; i<9; i++) {
        if (max < count[i])
            max = count[i];
    }

    cout << max;
}