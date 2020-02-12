#include <bits/stdc++.h>
using namespace std;

vector<int> graph[1001];
int n, m;
int answer = 0;
bool check[1001];

int dfs() {
    stack<int> s;
    
    for(int i=1; i<=n; i++) {
        if(check[i])
            continue;

        answer++;
        // cout << i << '\n';
        check[i] = true;
        s.push(i);

        while(!s.empty()) {
            // 현재 확인하는 노드
            int now = s.top();
            // cout << "now\t" << now << '\n';
            s.pop();

            // 연결된 노드가 있는지 확인해서 스택에 넣어준다.
            for(int j=0; j<graph[now].size(); j++) {
                int next = graph[now][j];
                if(check[next])
                    continue;
                s.push(next);
                check[next] = true;
            }
        }
    }
    return answer;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    while(m--) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cout << dfs();
}