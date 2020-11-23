#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
const int INFTY = INT_MAX;
int nodes[N];
int totalNums = 0, n, m;

void minHeapify(int x) {
    int leftChild = x * 2, rightChild = x * 2 + 1, smallest = x;
    if(leftChild <= totalNums && nodes[leftChild] < nodes[smallest]) {
        smallest = leftChild;
    }
    if(rightChild <= totalNums && nodes[rightChild] < nodes[smallest]) {
        smallest = rightChild;
    }
    if(x != smallest) {
        swap(nodes[x], nodes[smallest]);
        minHeapify(smallest);
    }
}

void decreaseKey(int i, int key) {
    if(key > nodes[i]) {
        return ;
    }
    nodes[i] = key;
    while(i > 1 && nodes[i / 2] > nodes[i]) {
        swap(nodes[i / 2], nodes[i]);
        i = i / 2;
    }
}

void insert(int key) {
    nodes[++totalNums] = INFTY;
    decreaseKey(totalNums, key);
}

int extract() {
    int minv = nodes[1];
    nodes[1] = nodes[totalNums--];
    minHeapify(1);
    return minv;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    int key;
    for(int i = 1; i <= n; ++i) {
        cin >> key;
        insert(key);
    }
    for(int i = 1; i <= m; ++i) {
        cout << extract() << ' ';
    }
    return 0;
}
