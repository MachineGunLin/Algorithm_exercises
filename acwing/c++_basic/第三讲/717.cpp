#include<bits/stdc++.h>
using namespace std;
int dp[50] = {0, 1, 1, 2, 3};

int main() {
    int N;
    cin >> N;
    for(int i = 5; i <= N; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    for(int i = 0; i < N - 1; ++i) {
        cout << dp[i] << " ";
    }
    cout << dp[N - 1] << endl;
}
