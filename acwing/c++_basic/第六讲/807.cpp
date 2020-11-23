#include<bits/stdc++.h>
using namespace std;

int sum(int l, int r) {
    if(l > r) {
        swap(l, r);
    }
    int res = 0;
    for(int i = l; i <= r; ++i) {
        res += i;
    }
    return res;
}

int main() {
    int l, r;
    cin >> l >> r;
    cout << sum(l, r) << endl;
}
