#include<bits/stdc++.h>
using namespace std;

const int N = 110;
int buildings[N];
int toLeft[N], toRight[N];
int K, n;

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> K;
    while(K--) {
        memset(buildings, 0, sizeof buildings);
        memset(toLeft, 0, sizeof toLeft);
        memset(toRight, 0, sizeof toRight);
        int res = 0;
        cin >> n;
        for(int i = 0; i < n; ++i) {
            cin >> buildings[i];
            toLeft[i] = 1;
            toRight[i] = 1;
        }
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j <= i; ++j) {
                if(buildings[j] < buildings[i]) {
                    toLeft[i] = max(toLeft[i], toLeft[j] + 1);
                    res = max(res, toLeft[i]);
                }
            }
        }
        for(int i = n - 1; i >= 0; --i) {
            for(int j = n - 1; j >= i; --j) {
                if(buildings[j] < buildings[i]) {
                    toRight[i] = max(toRight[i], toRight[j] + 1);
                    res = max(res, toRight[i]);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
