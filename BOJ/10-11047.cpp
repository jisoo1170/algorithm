#include <bits/stdc++.h>
using namespace std; 

int main() {
    int n, k;
    cin >> n >> k;

    int coin[11];

    for(int i=0; i<n; i++)
        cin >> coin[i];
    
    int answer = 0;
    for(int i=n-1; i>=0; i--) {
        // 나누기 몫이 현재 동전을 사용할 수 있는 최대 개수
        int count = k/coin[i];
        // 정답에 몇개 사용하는지 더해주고
        answer += count;
        // k원을 만드는 값에서 사용한 동전 값을 뺴준다
        k -= count*coin[i];
    }

    cout << answer;
}