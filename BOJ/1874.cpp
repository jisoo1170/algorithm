#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, max=0, num;
    cin >> n;

    stack<int> s;
    queue<char> answer;

    while(n--){
        cin >> num;
        if (max < num) {
            for(int i = max+1; i <= num; i++) {
                s.push(i);
                answer.push('+');
            }
            answer.push('-');
            s.pop();
            max = num;
        }
        else {
            if(s.top() != num)
                break;
            answer.push('-');
            s.pop();
        }
    }

    if (s.empty()) {
        while(!answer.empty()){
            cout << answer.front() << '\n';
            answer.pop();
        }
    }
    else {
        cout << "NO";
    }
    
}