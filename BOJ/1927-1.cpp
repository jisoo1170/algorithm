#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<int, vector<int>, greater<int> > PQ;
    // priority_queue<int> 로 선언시 최대힙, 위와 같이 선언시 최소힙
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x == 0){
            if(PQ.empty()) cout << "0\n";
            else{
                cout << PQ.top() << '\n';
                PQ.pop();
            }
        }
        else{
            PQ.push(x);
        }
    }  
}