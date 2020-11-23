#include<bits/stdc++.h>
using namespace std;

const int N = 110;
bool a[N][N];
int n, m;

int gauss() {
    int c, r;
    for(c = 0, r = 0; c < n; ++c) {
        int t = r;
        int len = N;
        for(int i = r; i < n; ++i) {
            if(a[i][c]) {
                t = i;
            }
        }
        if(a[t][c] == false) {
            continue;
        }
        for(int i = c; i <= n; ++i) {
            swap(a[t][i], a[r][i]);
        }
        for(int i = r + 1; i < n; ++i) {
            if(a[i][c]) {
                for(int j = n; j >= c; --j) {
                    a[i][j] ^= a[r][j];
                }
            }
        }
        ++r;
    }
    if(r < n) {
        for(int i = r; i < n; ++i) {
            if(a[i][n] == true) {
                return 2;
            }
        }
        return 1;
    }
    for(int i = n - 1; i >= 0; --i) {
        for(int j = i + 1; j < n; ++j) {
            a[i][n] ^= a[i][j] * a[j][n];
        }
    }
    return 0;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n + 1; ++j) {
            cin >> a[i][j];
        }
    }
    int t = gauss();
    if(t == 0) {
        for(int i = 0; i < n; ++i) {
            cout << (int)a[i][n] << endl;
        }
    } else if(t == 1) {
        cout << "Multiple sets of solutions" << endl;
    } else {
        cout << "No solution" << endl;
    }
    return 0;
}
