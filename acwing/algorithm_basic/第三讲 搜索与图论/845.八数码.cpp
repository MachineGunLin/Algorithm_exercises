#include<bits/stdc++.h>
using namespace std;

string beginS;
string endS = "12345678x";
unordered_map<string, int> dist;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int bfs(string beingS) {
    queue<string> q;
    q.push(beginS);
    dist[beingS] = 0;
    while(!q.empty()) {
        auto curS = q.front();
        q.pop();
        int curDist = dist[curS];
        if(curS == endS) {
            return curDist;
        }
        int posX = curS.find('x');
        int curX = posX / 3, curY = posX % 3;
        for(int i = 0; i < 4; ++i) {
            int newX = curX + dx[i], newY = curY + dy[i];
            if(newX >= 0 && newX < 3 && newY >=0 && newY < 3) {
                swap(curS[posX], curS[newX * 3 + newY]);
                if(dist.count(curS) == 0) {
                    dist[curS] = curDist + 1;
                    q.push(curS);
                }
                swap(curS[posX], curS[newX * 3 + newY]);
            }
        }
    }
    return -1;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    for(int i = 0; i < 9; ++i) {
        char c;
        cin >> c;
        beginS += c;
    }
    cout << bfs(beginS) << endl;
    return 0;
}
