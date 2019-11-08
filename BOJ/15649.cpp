#include <bits/stdc++.h>
using namespace std;

int n, m;

void func(int *arr, bool *check, int k) {
    if(k == m) {    //현재 arr담긴 개수(k)와 m이 같으면
        for(int i=0; i<m; i++) {    //수열 출력
            cout << arr[i]+1 << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i=0; i<n; i++) {
        if(!check[i]) { //숫자를 사용하지 앟은 경우
            arr[k] = i; //arr에 숫자를 넣어준다
            check[i] = 1;   //숫자 사용 표시
            func(arr, check, k+1);
            check[i]=0;
        }
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    int arr[m] = {};
    bool check[n] = {};

    func(arr, check, 0);
}
