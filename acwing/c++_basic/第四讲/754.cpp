#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    vector<vector<int> > nums(100, vector<int>(100));
    while(cin >> N, N) {
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j <= i; ++j) {
                if(i == j) {
                    nums[i][j] = 1;
                } else {
                    nums [i][j] = i - j + 1;
                }
            }
        }
        for(int i = 0; i < N; ++i) {
            for(int j = i + 1; j < N; ++j) {
                nums[i][j] = nums[j][i];
            }
        }
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N - 1; ++j) {
                cout << nums[i][j] << ' ';
            }
            cout << nums[i][N - 1] << endl;
        }
        cout << endl;
    }
}
