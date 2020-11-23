#include<bits/stdc++.h>
using namespace std;

vector<int> a, b;
int n, m;

bool isSubSeq(vector<int>& a, vector<int>& b) {
    for(int i = 0, j = 0; i < a.size(); ++i, ++j) {
        while(j < b.size() && a[i] != b[j]) {
            ++j;
        }
        if(j == b.size()) {
            return false;
        }
    }
    return true;
}

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    a.resize(n, 0);
    b.resize(m, 0);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for(int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    if(isSubSeq(a, b)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
