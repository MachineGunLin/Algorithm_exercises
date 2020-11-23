#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    vector<vector<ll> > nums(15, vector<ll>(15));
    while(cin >> N, N) {
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N; ++j) {
                nums[i][j] = pow(2, i + j);
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
