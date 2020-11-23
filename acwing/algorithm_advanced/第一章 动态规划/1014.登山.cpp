#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int mountains[N];
int toLeft[N], toRight[N];
int n;

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int res = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> mountains[i];
        toLeft[i] = 1;
        toRight[i] = 1;
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < i; ++j) {
            if(mountains[i] > mountains[j]) {
                toRight[i] = max(toRight[i], toRight[j] + 1);
            }
        }
    }
    for(int i = n - 1; i >= 0; --i) {
        for(int j = n - 1; j > i; --j) {
            if(mountains[i] > mountains[j]) {
                toLeft[i] = max(toLeft[i], toLeft[j] + 1);
            }
        }
    }
    for(int i = 0; i < n; ++i) {
        res = max(res, toLeft[i] + toRight[i] - 1);
    }
    cout << res << endl;
    return 0;
}
