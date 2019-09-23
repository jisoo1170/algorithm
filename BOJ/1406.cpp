#include <bits/stdc++.h>

using namespace std;

int main()
{
    //c++, c stream 사이의 sync를 맞춰주는 역할. cout 만 쓰면 필요 없으니 꺼준다
    ios::sync_with_stdio(0);

    //cin과 cout이 번갈아 나올 때 마다 flush를 하지 않도록 하는 명령
    cin.tie(0);

    string str;
    cin >> str;

    list<char> l;

    for(char c:str)
        l.push_back(c);

    auto cursor = l.end();

    int num;
    cin >> num;

    //줄바꿈 한개 제거를 해줘야만 함
    string tmp;
    getline(cin,tmp);

    while(num--) {
        string op;
        //띄어쓰기까지 받기 위해
        getline(cin, op);

        switch(op[0]) {
            case 'L':
                if(cursor != l.begin())
                    cursor--;
                break;
            case 'D':
                if(cursor != l.end())
                    cursor++;
                break;
            case 'B':
                if(cursor != l.begin()) {
                    cursor--;
                    cursor = l.erase(cursor);
                }
                break;
            case 'P':
                l.insert(cursor, op[2]);
                break;
        }
    }

    for (auto c : l) cout << c;
}