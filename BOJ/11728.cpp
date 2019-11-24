#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;   //A배열의 크기, B배열의 크기
    cin >> n >> m;

    int a[n], b[m];
    for(int i=0; i<n; i++) {    //a배열 입력
        cin >> a[i];
    }
    for(int i=0; i<m; i++) {    //b배열 입력
        cin >> b[i];
    }

    int idx0=0, idx1=0, idx2=0; //정답 배열 위치, a, b배열 위치
    int answer[n+m]={0}; //정답 저장할 배열

    while(idx1 < n && idx2 < m) {
        if(a[idx1] < b[idx2]) { //a,b 값 비교해서 정답 배열에 넣음
            answer[idx0++] = a[idx1++];
        }
        else {
            answer[idx0++] = b[idx2++];
        }
    }

    while(idx1 < n) {   //a에 사용하지 않은 원소 없을때까지
        answer[idx0++] = a[idx1++];
    }

    while(idx2 < m) {   //b에 사용하지 않은 원소 없을때까지
        answer[idx0++] = b[idx2++];
    }
    for(int i=0; i< n+m; i++) {
        cout << answer[i] << ' ';
    }

}