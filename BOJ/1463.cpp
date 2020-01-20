#include <bits/stdc++.h>
using namespace std;

int main() {
    int d[1000001] = {0,};
    int x;
    cin >> x;

    // 배열 값은 계산 횟수?
    for(int i=2; i<=x; i++){
        // 1을 뺀 인덱스 값과 나눴을 때 인덱스 값 비교해서 더 작은 값 선택
        d[i] = d[i-1] + 1;
        if(i%2 == 0)
            d[i] = min(d[i],d[i/2]+1);
        if(i%3 == 0)
            d[i] = min(d[i], d[i/3]+1);
    }
    cout << d[x];
}