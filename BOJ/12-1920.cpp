#include <bits/stdc++.h>
using namespace std;
/*
    이분탐색! 이라서 재귀로 풀어야한다고 생각했는데
    그냥 while문만 돌려도 됐다.
*/

int n;
int a[100001];

int BinarySearch(int target) {
    int en = n-1;
    int st = 0;
    
    while(st <= en) { // 시작과 끝이 같아지면 끝
        int mid = (st+en) / 2;
        if(a[mid] < target)
            st = mid+1;
        else if(a[mid] > target)
            en = mid -1;
        else
            return 1;
    }
    return 0;
}

int main() {
    // 시간 초과 났는데 아래 두줄 붙이니깐 안났당
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    int m;
    cin >> m;
    
    while(m--) {
        int target;
        cin >> target;
        cout << BinarySearch(target) << '\n';
    }
}