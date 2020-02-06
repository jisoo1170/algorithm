#include <bits/stdc++.h>
using namespace std;


// 아래 코드처럼 풀었는데 틀렸다.
// 이유는 모르겠... 다 잘 나오는뎅,,,

// int main() {
//     int time[3]={300,60,10};
//     int ans[3]={0,};

//     int T;
//     cin >> T;
    
//     for(int i=0; i<3; i++) {
//         if(T > time[i]) {
//             int count = T/time[i];
//             T -= (count*time[i]);
//             ans[i] += count;
//         }
//     }

//     if(T != 0)
//         cout << -1;
//     else {
//         cout << ans[0] << ' ' << ans[1] << ' ' << ans[2];
//     }
// }


// 이렇게 간단하게도 가능하다니 놀랍,,,다,,,
int main() {
    int T;
    cin >> T;
    if(T % 10 != 0) {
        cout << -1;
        return 0;
    }

    int A = T/300;
    T -= A*300;
    int B = T/60;
    T -= B*60;
    cout << A << ' ' << B << ' ' << T/10;
}