#include<bits/stdc++.h>
using namespace std;

vector<int> A, B;

vector<int> add(vector<int> &A, vector<int> &B) {
    vector<int> res;
    int t = 0;
    for(int i = 0; i < A.size() || i < B.size(); ++i) {
        if(i < A.size()) {
            t += A[i];
        }
        if(i < B.size()) {
            t += B[i];
        }
        res.push_back(t % 10);
        t /= 10;
    }
    if(t) {
        res.push_back(1);
    }
    return res;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    for(int i = a.size() - 1; i >= 0; --i) {
        A.push_back(a[i] - '0');
    }
    for(int i = b.size() - 1; i >= 0; --i) {
        B.push_back(b[i] - '0');
    }
    vector<int> C = add(A, B);
    for(int i = C.size() - 1; i >= 0; --i) {
        cout << C[i];
    }
    return 0;
}
