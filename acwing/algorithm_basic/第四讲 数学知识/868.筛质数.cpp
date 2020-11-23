#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int primes[N];
int cnt = 0;
bool st[N];
int n;

void get_primes(int n) {
    for(int i = 2; i <= n; ++i) {
        if(st[i]) {
            continue;
        }
        primes[cnt++] = i;
        for(int j = i + i; j <= n; j += i) {
            st[j] = true;
        }
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    get_primes(n);
    cout << cnt << endl;
}
