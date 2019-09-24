#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, check = 0;
    string input;

    cin >> n;
    while(n--) {
        check = 0;
        stack<char> s;

        cin >> input;

        for(char i:input){
            if(i == ')') {
                if(!s.empty()) {
                    s.pop();
                }
                else {
                    check = 1;
                    break;
                }
            }
            else {
                s.push('(');
            }
        }
        if(s.empty() && check == 0)
            cout << "YES" << '\n';
        else 
            cout << "NO" << '\n';     
    }
}