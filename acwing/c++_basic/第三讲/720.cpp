#include<bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, res = 0;
    cin >> X;
    while(cin >> Y, Y <= 0) ;        //���YС�ڵ���0���ͼ�������
    for(int i = X; i < X + Y; ++i) {
        res += i;
    }
    cout << res;
}
