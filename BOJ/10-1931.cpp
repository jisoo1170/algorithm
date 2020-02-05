#include <bits/stdc++.h>
using namespace std;

/*
    끝나는 시간 기준으로 정렬을 하고
    그 값이 똑같으면 시작 시간이 빠른 것을 앞에 둔다.
    
    나는 처음에 시작하는 시간이 빠른 것을 먼저 두면 되겠다고 생각했는데,
    끝나는 시간이 빠른걸 하면 어쨋든 시작시간이 빠르고 자연스레 짧은 것을
    먼저 두게 되니 더 좋다.
*/

int main() {
    pair<int, int> time[100001];
    int n;

    cin >> n;

    for(int i=0; i<n; i++)
        cin >> time[i].second >> time[i].first;
        // 정렬할때 처음 인자에 의해 정렬이 되므로 끝나는 시간을 처음에 넣어준다.

    sort(time, time+n);

    int answer = 1;
    int finish = time[0].first; // 끝나는 시간 저장
    for(int i=1; i<n; i++) {
        if(finish <= time[i].second) { //끝나는 시간과 시작 시간 비교
            finish = time[i].first;
            answer++;
        }
    }
    cout << answer;
}