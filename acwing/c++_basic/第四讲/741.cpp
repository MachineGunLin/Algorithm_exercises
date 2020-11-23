#include<bits/stdc++.h>
using namespace std;
typedef long long ll;       //用int有可能会溢出

int main() {
    int N;
    cin >> N;
    vector<ll> fib(65);
    fib[0] = 0, fib[1] = 1;
    for(int i = 2; i < 60; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    while(N--) {
        int x;
        cin >> x;
        cout << "Fib(" << x << ") = " << fib[x] << endl;
    }
}
