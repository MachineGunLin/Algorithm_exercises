#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    priority_queue<int, vector<int>, greater<int>> heap;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        heap.push(x);
    }
    int res = 0;
    while(heap.size() >= 2) {
        int fruit = heap.top();
        heap.pop();
        int anotherFruit = heap.top();
        heap.pop();
        res += fruit + anotherFruit;
        heap.push(fruit + anotherFruit);
    }
    cout << res << endl;
    return 0;
}
