#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int> > nums(N, vector<int>(M));
    int cnt = 1;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            nums[i][j] = cnt++;
        }
    }
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            if(j == M - 1) {
                cout << "PUM" << endl;
            } else {
                cout << nums[i][j] << " ";
            }
        }
    }
}
