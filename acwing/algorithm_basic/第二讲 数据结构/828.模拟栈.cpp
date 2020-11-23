#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int stk[N];
int tt;

void init() {
    tt = 0;
}

void push(int x) {
    stk[++tt] = x;
}

void pop() {
    --tt;
}

bool empty() {
    return tt == 0;
}

int query() {
    return stk[tt];
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int m;
    cin >> m;
    while(m--) {
        string op;
        int x;
        cin >> op;
        if(op == "push") {
            cin >> x;
            push(x);
        } else if(op == "pop") {
            pop();
        } else if(op == "query") {
            cout << query() << endl;
        } else if(op == "empty") {
            if(empty() == true) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
