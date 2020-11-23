#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int nums[N];
vector<int> dp;
int n;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    dp.resize(n);
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    for(int i = 0; i < n; ++i) {
        dp[i] = 1;
        for(int j = 0; j < i; ++j) {
            if(nums[j] < nums[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << *max_element(dp.begin(), dp.begin() + n) << endl;
    return 0;
}
