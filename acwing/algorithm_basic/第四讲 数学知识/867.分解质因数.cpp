#include<bits/stdc++.h>
using namespace std;

void divide(int x) {
    for(int i = 2; i <= x / i; ++i) {
        if(x % i == 0) {
            int s = 0;
            while(x % i == 0) {
                x /= i;
                ++s;
            }
            cout << i << ' ' << s << endl;
        }
    }
    if(x > 1) {
        cout << x << ' ' << 1 << endl;
    }
    cout << endl;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        divide(x);
    }
    return 0;
}
