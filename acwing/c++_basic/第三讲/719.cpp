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
            if(i % 2 != 0) {        //���ﲻ��д��i % 2 == 1,��Ϊ�����и���
                res += i;
            }
        }
        cout << res << endl;
    }
}
