#include <bits/stdc++.h>
using namespace std;

int main() {
    int stair[301] = {0,};  // 계단 점수 저장
    int n;  // 계단 수
    int sum[301][2] = {0,}; // 계단 점수 합 
    /* 
        [][0] -> 이전 계단을 안밟음
        [][1] -> 이전 계단을 밟음
    */

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> stair[i];
    }

    sum[0][0] = stair[0];
    sum[1][0] = stair[1];
    sum[1][1] = stair[0] + stair[1];

    for(int i=2; i<n; i++) {
        sum[i][0] = max(sum[i-2][0],sum[i-2][1]) + stair[i];    //이전 계단을 안밟는 경우
        sum[i][1] = sum[i-1][0] + stair[i]; //이전 계단 밟는 경우
    }
    cout << max(sum[n-1][0],sum[n-1][1]);
}