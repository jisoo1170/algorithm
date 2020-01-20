#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1001] ={0,};
    
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    int answer = 1;

    for(int i=1; i<n; i++) {
        int count = 1;
        for(int j=0; j<i; j++) {
            if(a[j] < a[i]) {
                if (j != 0) {
                    if (a[j-1] < a[j])
                        count++;
                }
                else{ 
                    count++;
                }
            }
        }
        answer = max(answer, count);
    }
    cout << answer;
}