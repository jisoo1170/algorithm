#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100000];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    int dp[100000]={0,};
    dp[0] = a[0];
    for(int i=1; i<n; i++) {
        // i번째 항을 마지막으로 하는 연속합
        // 음수면 안더하는게 나으니깐 0과 비교해서 더해준다
        dp[i] = max(dp[i-1], 0) + a[i];
    }

    int max = dp[0];
    for(int i=1; i<n; i++) {
        if(max < dp[i])
            max = dp[i];
    }
    cout << max;
}