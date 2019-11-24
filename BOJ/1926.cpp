#include <bits/stdc++.h>
using namespace std;

int main() {
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1}; //상하좌우 네 방향

    int n, m;   //도화지 세로, 가로
    cin >> n >> m;

    int map[501][501] = {0,};  //그림 판
    bool visit[501][501] = {0,}; //해당 칸 방문했는지 저장

    int max_area = 0;    //최댓값
    int num = 0;    //그림의 수

    for(int i=0; i<n; i++) {    //그림 위치 입력받음
        for (int j=0; j<m; j++) {
            cin >> map[i][j];
        }
    }
    
    for(int i=0; i<n; i++) {    //모든 칸 순회
        for(int j=0; j<m; j++) {

            if(map[i][j] == 0 || visit[i][j] == 1)   //그림이 아니거나 이미 방문 한 경우
                continue;   //루프 끝으로 이동

            num++;  //그림 수 증가
            visit[i][j] = 1;    //방문했다고 표시
            
            queue<pair<int, int>> q;    //인접한 노드 저장하는 큐
            q.push({i, j}); //현재 보고있는 노드 저장
        
            int area = 0;   //그림의 넓이

            while(!q.empty()) {  //큐가 빌 때 까지 반복
                area++; //넓이 증가

                auto cur = q.front();   //큐 젤 앞에 원소 꺼낸다
                q.pop();

                for(int k=0; k<4; k++) {    //상하좌우 본다

                    int x = cur.first + dx[k];
                    int y = cur.second + dy[k];  //정확한 좌표 저장

                    if(x < 0 || x >= n || y < 0 || y >= m)  //map 범위 밖인 경우
                        continue;   //루프 끝으로
                    
                    if(visit[x][y] == 1 || map[x][y] == 0)   //이미 방문했거나 그림이 아닌경우
                        continue;

                    visit[x][y] = 1;
                    q.push({x,y});
                    
                }
            }
            max_area = max(max_area, area);   //최댓값 비교해서 저장
        }
    }
    cout << num << '\n' << max_area;
}