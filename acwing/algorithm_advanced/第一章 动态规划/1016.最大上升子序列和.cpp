#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int nums[N];
int dp[N];
int n;

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int res = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
        dp[i] = nums[i];
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < i; ++j) {
            if(nums[i] > nums[j]) {
                dp[i] = max(dp[i], dp[j] + nums[i]);
            }
        }
        res = max(res, dp[i]);
    }
    cout << res << endl;
    return 0;
}
