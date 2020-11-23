#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if(x < 2) {
        return false;
    }
    for(int i = 2; i <= x / i; ++i) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
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
        if(isPrime(x)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
