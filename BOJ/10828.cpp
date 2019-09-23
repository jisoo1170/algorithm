#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    stack<int> s;

    while(n--) {
        string input;
        cin >> input;
        if (input == "push") {
            int num;
            cin >> num;
            s.push(num);
        }

        else if (input=="pop"){
            if(s.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << s.top() << '\n';
                s.pop();
            }
        }

        else if(input=="size") {
            cout << s.size() << '\n';
        }
        
        else if (input=="empty"){
            if (s.empty())
                cout << 1 << '\n';
            else
            {
                cout << 0 << '\n';
            }
        }

        else {
            if (s.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << s.top() << '\n';
            }
        }
    }
}