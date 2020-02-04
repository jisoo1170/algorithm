#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[1005];
    for(int i=0; i<n; i++)
        cin >> a[i];

    int dp[1005];

    dp[0]=1;
    for(int i=1; i<n; i++) {
        dp[i] =1;
        for(int j=0; j<i; j++) {
            if(a[j] < a[i]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    // max_element(dp,dp+n)은 dp[0] to dp[n-1]중에 최댓값의 주소를 반환하는 함수.
    // cout << *max_element(dp,dp+n);
    int max = 0;
    for(int i=0; i<n; i++)
        if(max < dp[i])
            max = dp[i];
    cout << max;
}   