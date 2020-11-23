#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<int> > res;
vector<int> oneCombination;
bool visited[10];

void DFS(int curPos, int n, vector<int>& oneCombination, vector<vector<int> >& res) {
    if(curPos == n) {
        res.push_back(oneCombination);
        return ;
    }
    for(int i = 1; i <= n; ++i) {
        if(visited[i] == false) {
            oneCombination.push_back(i);
            visited[i] = true;
            DFS(curPos + 1, n, oneCombination, res);
            visited[i] = false;
            oneCombination.pop_back();
        }
    }
}

int main() {
    int _n;
    cin >> _n;
    n = _n;
    DFS(0, n, oneCombination, res);
    for(int i = 0; i < res.size(); ++i) {
        for(int j = 0; j < res[i].size(); ++j) {
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }
}
