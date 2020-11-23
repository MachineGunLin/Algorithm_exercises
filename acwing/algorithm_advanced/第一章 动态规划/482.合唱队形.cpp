#include<bits/stdc++.h>
using namespace std;

const int N = 110;
int mates[N];
int toLeft[N], toRight[N];
int n;

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> mates[i];
        toLeft[i] = 1;
        toRight[i] = 1;
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < i; ++j) {
            if(mates[i] > mates[j]) {
                toRight[i] = max(toRight[i], toRight[j] + 1);
            }
        }
    }
    for(int i = n - 1; i >= 0; --i) {
        for(int j = n - 1; j > i; --j) {
            if(mates[i] > mates[j]) {
                toLeft[i] = max(toLeft[i], toLeft[j] + 1);
            }
        }
    }
    int res = n;
    for(int i = 0; i < n; ++i) {
        res = min(res, n - (toLeft[i] + toRight[i] - 1));
    }
    cout << res << endl;
    return 0;
}
