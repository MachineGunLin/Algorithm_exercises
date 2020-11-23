#include<bits/stdc++.h>
using namespace std;

int pathsNum(int x, int y) {
    if(x == 0 || y == 0) {
        return 1;
    }
    return pathsNum(x - 1, y) + pathsNum(x, y - 1);
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << pathsNum(x, y) << endl;
}
