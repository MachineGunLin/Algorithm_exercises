#include<bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, res = 0;
    cin >> X;
    while(cin >> Y, Y <= 0) ;        //如果Y小于等于0，就继续输入
    for(int i = X; i < X + Y; ++i) {
        res += i;
    }
    cout << res;
}
