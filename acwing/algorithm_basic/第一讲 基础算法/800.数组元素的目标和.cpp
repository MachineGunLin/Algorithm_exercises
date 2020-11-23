#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int nums1[N], nums2[N];
int n, m, x;
vector<vector<int>> res;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m >> x;
    for(int i = 0; i < n; ++i) {
        cin >> nums1[i];
    }
    for(int i = 0; i < m; ++i) {
        cin >> nums2[i];
    }
    for(int i = 0, j = m - 1; i < n && j >= 0; ) {
        if(nums1[i] + nums2[j] == x) {
            res.push_back({i, j});
            break;
        } else if(nums1[i] + nums2[j] > x) {
            --j;
        } else if(nums1[i] + nums2[j] < x) {
            ++i;
        }
    }
    for(auto &ans : res) {
        cout << ans[0] << ' ' << ans[1] << endl;
    }
    return 0;
}
