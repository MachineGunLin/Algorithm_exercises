#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    vector<vector<int> > nums(100, vector<int>(100));
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    cin >> n >> m;
    for(int x = 0, y = 0, direction = 0, cnt = 1; cnt <= n * m; ++cnt) {
        nums[x][y] = cnt;
        int newX = x + dx[direction], newY = y + dy[direction];
        if(newX < 0 || newX >= n || newY < 0 || newY >= m || nums[newX][newY] != 0) {       //����һ����x, y) (��newX��newY)�����߽磬�����Ѿ��������ʱ����Ҫ����һ�·����ټ���newX, newY
            direction = (direction + 1) % 4;
            newX = x + dx[direction];
            newY = y + dy[direction];
        }
        x = newX;
        y = newY;
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m - 1; ++j) {
            cout << nums[i][j] << ' ';
        }
        cout <<nums[i][m - 1] << endl;
    }
}
