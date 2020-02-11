#include <bits/stdc++.h>
using namespace std;
/*
    가장 왼쪽의 index를 구하는 방법은 a[mid] >= target 일 때, end 값을 mid값으로 바꿔주면 된다.
    그래야 가장 처음 발견한 target과 같은 값이 en이 되면서 더 작은 idx값을 찾아나갈 수 있다.

    가장 오른쪽 index를 구하는 방법은 a[mid] <= target 일 때. st 값을 mid+1로 바꿔준다.
    그래야 가장 처음 발견한 target과 같은 값이 st가 되면서 더 큰 idx값을 찾아나갈 수 있다.
*/
int n;
int a[500001];

int upper_idx(int target) {
    int st = 0;
    int en = n;
    while(st < en) {
        int mid = (st+en)/2;
        if(a[mid] <= target)
            st = mid+1;
        else
            en = mid;
    }
    return en;
}

int lower_idx(int target) {
    int st = 0;
    int en = n;
    while(st < en) {
        int mid = (st+en)/2;
        if(a[mid] >= target)
            en = mid;
        else
            st = mid+1;
    }
    return st;
}

int main() {
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
        cout << upper_idx(target)-lower_idx(target) << ' ';
    }
    
}