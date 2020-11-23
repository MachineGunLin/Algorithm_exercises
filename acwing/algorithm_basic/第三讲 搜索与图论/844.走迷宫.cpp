#include<bits/stdc++.h>
using namespace std;

const int N = 110;

using PII = pair<int, int>;

int n, m;
int maze[N][N];
int dist[N][N];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int bfs() {
    memset(dist, -1, sizeof dist);
    dist[0][0] = 0;
    queue<PII> q;
    q.push({0, 0});
    while(!q.empty()) {
        PII head = q.front();
        q.pop();
        int curX = head.first, curY = head.second;
        for(int i = 0; i < 4; ++i) {
            int newX = curX + dx[i], newY = curY + dy[i];
            if(newX >= 0 && newX < n && newY >= 0 && newY < m && maze[newX][newY] == 0 && dist[newX][newY] == -1) {
                dist[newX][newY] = dist[curX][curY] + 1;
                q.push({newX, newY});
            }
        }
    }
    return dist[n - 1][m - 1];
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> maze[i][j];
        }
    }
    cout << bfs() << endl;
    return 0;
}
