#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int count[26] = {0,};
    for(int i=0; i<str.length(); i++) {
        count[str.at(i) - 97] += 1;
    }

    int idx=0;
    int max=0;
    for(int i=0; i<26; i++) {
        if(max < count[i]) {
            idx = i;
            max = count[i];
        }
    }
    cout << char(idx+97) << '\n';
}