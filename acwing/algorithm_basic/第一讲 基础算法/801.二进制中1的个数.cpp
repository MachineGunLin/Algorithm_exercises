#include<bits/stdc++.h>
using namespace std;

int n;

int lowbit(int x) {
    return x & (-x);
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    while(n--) {
        int x, res = 0;
        cin >> x;
        while(x) {
            x -= lowbit(x);
            ++res;
        }
        cout << res << ' ';
    }
    return 0;
}


// 下面这样也可

// #include<bits/stdc++.h>
// using namespace std;

// const int N = 1e5 + 10;
// int nums[N], res[N];
// int n;

// int main() {
//     cin.tie(0);
//     cout.tie(0);
//     ios::sync_with_stdio(false);
//     cin >> n;
//     for(int i = 0; i < n; ++i) {
//         cin >> nums[i];
//         int cnt = 0;
//         for(int j = 0; j < 32; ++j) {
//             if(((nums[i] >> j) & 1) == 1) {
//                 ++cnt;
//             }
//         }
//         res[i] = cnt;
//     }
//     for(int i = 0; i < n; ++i) {
//         cout << res[i] << ' ';
//     }
//     return 0;
// }
