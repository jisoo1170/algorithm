#include <bits/stdc++.h>
using namespace std;

int main() {
    int home[1001][3]={0,};
    int dp[1001][3]={0,};
    int n;


    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> home[i][0] >> home[i][1] >> home[i][2];
    }

    dp[0][0] = home[0][0];
    dp[0][1] = home[0][1];
    dp[0][2] = home[0][2];

    for(int i=1; i<n; i++) {
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + home[i][0];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + home[i][1];
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + home[i][2];
    }

    cout << min(min(dp[n-1][0], dp[n-1][1]), dp[n-1][2]);
}