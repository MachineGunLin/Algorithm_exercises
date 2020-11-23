#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int nums[N];
int n, q, k;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> q;
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    while(q--) {
        cin >> k;
        int l = 0, r = n - 1;
        while(l < r) {
            int mid = l + r >> 1;
            if(nums[mid] >= k) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        if(nums[l] != k) {
            cout << "-1 -1" << endl;
        } else {
            cout << l << ' ';
            int l = 0, r = n - 1;
            while(l < r) {
                int mid = l + r + 1 >> 1;
                if(nums[mid] <= k) {
                    l = mid;
                } else {
                    r = mid - 1;
                }
            }
            cout << l << endl;
        }
    }
    return 0;
}
