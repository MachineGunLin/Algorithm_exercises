#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int stk[N], nums[N];
int tt;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    tt = 0;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
        while(tt != 0 && stk[tt] >= nums[i]) {
            --tt;
        }
        if(tt == 0) {
            cout << "-1" << ' ';
        } else {
            cout << stk[tt] << ' ';
        }
        stk[++tt] = nums[i];
    }
    return 0;
}
