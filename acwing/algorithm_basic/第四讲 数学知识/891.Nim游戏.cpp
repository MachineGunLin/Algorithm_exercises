#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int res = 0;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        res ^= x;
    }
    if(res != 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
