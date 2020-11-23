#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, X, Y;
    cin >> N;
    while(N--) {
        cin >> X >> Y;
        int res = 0;
        if(X > Y) {
            swap(X, Y);
        }
        for(int i = X + 1; i < Y; ++i) {
            if(i % 2 != 0) {        //这里不能写成i % 2 == 1,因为可能有负数
                res += i;
            }
        }
        cout << res << endl;
    }
}
