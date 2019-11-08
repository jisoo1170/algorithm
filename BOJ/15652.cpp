#include <bits/stdc++.h>
using namespace std;
int n,m;

void func(int *arr, int k) {    //k는 현재 선택한 개수
    if(m==k) {
        for(int i=0; i<m; i++) {
            cout << arr[i]+1 << ' ';
        }
        cout << '\n';
        return;
    }
    int st=0; //어느 숫자까지 저장했는지 기록
    if(k!=0)
        st = arr[k-1];

    for(int i=st; i<n; i++) {
        arr[k]=i;
        func(arr, k+1);
    }
}

int main() {
    cin >> n >> m;

    int arr[m] = {};
    func(arr,0);
}