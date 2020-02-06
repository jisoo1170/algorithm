#include <bits/stdc++.h>
using namespace std;

/*
    들어온 로프의 값을 내림차순 정렬해준다.
    예를 들어 로프의 값이 [10, 5, 3] 이라면,
    10*1, 5*2, 3*3 을 계산하여 가장 큰 값을 선택하면 된다.
*/

int main() {
    int n;
    int k[100001];
    int w=0;
#include <bits/stdc++.h>
using namespace std;

/*
    들어온 로프의 값을 정렬해준다.
    예를 들어 로프의 값이 [10, 5, 3] 이라면,
    10*1, 5*2, 3*3 을 계산하여 가장 큰 값을 선택하면 된다.
*/

int main() {
    int n;
    int k[100001];
    int w=0;

    cin >> n;

    for(int i=0; i<n; i++)
        cin >> k[i];
    sort(k, k+n);

    for(int i=0; i<n; i++) {
        w = max(w, k[i]*(n-i));
    }
    cout << w;
    return 0;
}
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> k[i];
    sort(k, k+n);

    for(int i=0; i<n; i++) {
        w = max(w, k[i]*(n-i));
    }
    cout << w;
    return 0;
}