#include <bits/stdc++.h>
using namespace std;

int main()
{
    //c++, c stream 사이의 sync를 맞춰주는 역할. cout 만 쓰면 필요 없으니 꺼준다
    ios::sync_with_stdio(0);

    //cin과 cout이 번갈아 나올 때 마다 flush를 하지 않도록 하는 명령
    cin.tie(0);

    string input;
    cin >> input;
    int count[26] = {};

    for(auto i : input) {
        count[i-'a']++;
    }

    for(int i=0; i<26; i++) {
        cout << count[i] << ' ';
    }
}