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
        if(newX < 0 || newX >= n || newY < 0 || newY >= m || nums[newX][newY] != 0) {       //当下一个（x, y) (即newX和newY)超出边界，或者已经计算过的时候，需要更新一下方向，再计算newX, newY
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
