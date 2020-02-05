#include <bits/stdc++.h>
using namespace std;
/*
    1,2,3으로 구하는거니까 dp[n]에서 1을 뺀 가지수에 그냥 1만 더하면 n 이 되므로
    dp[n-1] 을 더해주고 2, 3도 마찬가지로 dp[n-2], dp[n-3]을 더해준다.
    
    그리고 주어지는 숫자가 1~11이라서 넘 작은 수라 미리 구해놓고
    리턴하는 방법도 있다는걸 깨달았다.
*/

int main() {
    int T;
    int n;

    int dp[12]={0,};

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    
    for(int i=4; i<11; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    cin >> T;

    for(int i=0; i<T; i++) {
        cin >> n;
        cout << dp[n] << '\n';
    }

}