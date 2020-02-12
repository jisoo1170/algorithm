#include <bits/stdc++.h>
using namespace std;

vector<int> graph[1001];
bool check[1001];
int n, m, v;

void dfs() {

    stack<int> s;
    s.push(v);

    while(!s.empty()) {
        int now = s.top();
        // 남아있는 애들이 있으므로 pop해주고 체크
        s.pop();

        if(check[now])
            continue;

        check[now] = true; 
        cout << now << " ";

        // 내림차순 정렬이 돼있는데 stack이므로 역순으로 해준다
        for(int i=graph[now].size()-1; i>=0; i--) {
            int next = graph[now][i];
            if(check[next])
                continue;
            s.push(next);
        }
    }
    return;
}

void bfs() {
    queue<int> q;
    memset(check, false, sizeof(check));

    q.push(v);
    check[v] = true;
    while(!q.empty()) {
        int now = q.front();
        q.pop();

        cout << now << " ";

        for(int i=0; i<graph[now].size(); i++) {
            int next = graph[now][i];

            if(check[next])
                continue;

            check[next] = true;
            q.push(next);

        }
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> v;
    
    while(m--) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1; i<=v; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs();
    cout << '\n';
    bfs();
    cout << '\n';
}