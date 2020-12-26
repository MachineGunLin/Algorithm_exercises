#include<bits/stdc++.h>
using namespace std;

using LL = long long;
const int N = 32;
LL dp[N][N / 2][N / 3][N / 4][N / 5];
int n, k, nums[5];

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    while(cin >> k, k) {
        memset(nums, 0, sizeof nums);
        for(int i = 0; i < k; ++i) {
            cin >> nums[i];
        }
        memset(dp, 0, sizeof dp);
        dp[0][0][0][0][0] = 1;
        for(int a = 0; a <= nums[0]; ++a) {
            for(int b = 0; b <= nums[1]; ++b) {
                for(int c = 0; c <= nums[2]; ++c) {
                    for(int d = 0; d <= nums[3]; ++d) {
                        for(int e = 0; e <= nums[4]; ++e) {
                            if(a > 0 && a - 1 >= b) {
                                dp[a][b][c][d][e] += dp[a - 1][b][c][d][e];
                            }
                            if(b > 0 && b - 1 >= c) {
                                dp[a][b][c][d][e] += dp[a][b - 1][c][d][e];
                            }
                            if(c > 0 && c - 1 >= d) {
                                dp[a][b][c][d][e] += dp[a][b][c - 1][d][e];
                            }
                            if(d > 0 && d - 1 >= e) {
                                dp[a][b][c][d][e] += dp[a][b][c][d - 1][e];
                            }
                            if(e > 0) {
                                dp[a][b][c][d][e] += dp[a][b][c][d][e - 1];
                            }
                        }
                    }
                }
            }
        }
        cout << dp[nums[0]][nums[1]][nums[2]][nums[3]][nums[4]] << endl;
    }
    return 0;
}
