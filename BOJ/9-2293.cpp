#include <bits/stdc++.h>
using namespace std;

/*
    처음에 감을 하나도 못잡음.
    공책에 쓰면서 하니깐 감을 잡았다.
    dp[j] += dp[j-a[i]] i번째 동전까지 써서 10을 만드는 경우
    예를들어> 5값을 쓰면서 7을 구하는 경우는dp[2] + 5 -> 2를 만드는 경우에 그냥 5만 더하면 되니까
*/

// main 안에서 선언하니깐 오류남 왜지??
int n, k;
int coin[111];
int dp[11111];

int main() {
    
    
    cin >> n >> k;

    for(int i=0; i<n; i++)
        cin >> coin[i];

    dp[0] = 1;
    for(int i=0; i<n; i++) {
        for(int j=coin[i]; j<=k; j++) {
            dp[j] += dp[j-coin[i]];
        }
    }

    cout << dp[k];
    return 0;
}