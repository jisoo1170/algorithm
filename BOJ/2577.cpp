#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    string val = to_string(a*b*c);
    int count[10] = {};



    for(auto v:val) {
        count[v-'0']++;
    }

    for(int i=0; i<10; i++)
        cout << count[i] << " ";
}