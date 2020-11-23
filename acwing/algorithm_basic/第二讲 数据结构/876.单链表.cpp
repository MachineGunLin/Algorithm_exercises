#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int e[N], ne[N];
int head, idx;

void init() {
    head = -1;
    idx = 0;
}

void add_to_head(int x) {
    e[idx] = x;
    ne[idx] = head;
    head = idx;
    ++idx;
}

void add(int k, int x) {
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx;
    ++idx;
}

void remove(int k) {
    ne[k] = ne[ne[k]];
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    init();
    int m;
    cin >> m;
    while(m--) {
        char op;
        int k, x;
        cin >> op;
        if(op == 'H') {
            cin >> x;
            add_to_head(x);
        } else if(op == 'I') {
            cin >> k >> x;
            add(k - 1, x);
        } else if(op == 'D') {
            cin >> k;
            if(k == 0) {
                head = ne[head];
            } else {
                remove(k - 1);
            }
        }
    }
    for(int i = head; i != -1; i = ne[i]) {
        cout << e[i] << ' ';
    }
    return 0;
}
