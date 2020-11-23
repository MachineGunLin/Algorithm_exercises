#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int nums[N], Hash[N];
int n;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int res = 0;
    for(int i = 0, j = 0; j < n; ++j) {
        ++Hash[nums[j]];
        while(Hash[nums[j]] > 1) {
            --Hash[nums[i]];
            ++i;
        }
        res = max(res, j - i + 1);
    }
    cout << res << endl;
    return 0;
}
