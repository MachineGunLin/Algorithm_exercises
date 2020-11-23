#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int stairs[N];

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> stairs[i];
    }
    int res = 0;
    for(int i = 1; i <= n; i += 2) {
        res ^= stairs[i];
    }
    if(res != 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
