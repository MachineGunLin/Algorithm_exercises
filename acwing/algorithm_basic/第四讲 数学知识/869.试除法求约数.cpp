#include<bits/stdc++.h>
using namespace std;

vector<int> get_divisors(int x) {
    vector<int> res;
    for(int i = 1; i <= x / i; ++i) {
        if(x % i == 0) {
            res.push_back(i);
            if(i != x / i) {
                res.push_back(x / i);
            }
        }
    }
    sort(res.begin(), res.end());
    return res;
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
        vector<int> res = get_divisors(x);
        for(auto &t : res) {
            cout << t << ' ';
        }
        cout << endl;
    }
    return 0;
}
