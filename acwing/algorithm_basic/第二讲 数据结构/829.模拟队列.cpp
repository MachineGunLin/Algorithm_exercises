#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int q[N], head, tail;

void init() {
    head = 0;
    tail = 0;
}

void push(int x) {
    q[++tail] = x;
}

void pop() {
    ++head;
}

string empty() {
    if(head == tail) {
        return "YES";
    } else {
        return "NO";
    }
}

int query() {
    return q[head + 1];
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
            cout << empty() << endl;
        }
    }
    return 0;
}
