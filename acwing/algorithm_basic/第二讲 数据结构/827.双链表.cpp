#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int e[N], l[N], r[N];
int head, tail, idx;

void init() {
    head = 0;
    tail = 1;
    r[head] = tail;
    l[tail] = head;
    idx = 2;
}

void add(int k, int x) {
    e[idx] = x;
    l[idx] = k;
    r[idx] = r[k];
    l[r[k]] = idx;
    r[k] = idx;
    ++idx;
}

void remove(int k) {
    r[l[k]] = r[k];
    l[r[k]] = l[k];
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    init();
    int m;
    cin >> m;
    while(m--) {
        string op;
        int k, x;
        cin >> op;
        if(op == "L") {
            cin >> x;
            add(0, x);
        } else if(op == "R") {
            cin >> x;
            add(l[1], x);
        } else if(op == "IL") {
            cin >> k >> x;
            add(l[k + 1], x);
        } else if(op == "IR") {
            cin >> k >> x;
            add(k + 1, x);
        } else if(op == "D") {
            cin >> k;
            remove(k + 1);
        }
    }
    for(int i = r[0]; i != 1; i = r[i]) {
        cout << e[i] << ' ';
    }
    return 0;
}
