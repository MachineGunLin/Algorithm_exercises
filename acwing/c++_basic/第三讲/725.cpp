#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    while(N--) {
        int x, sum = 0;
        cin >> x;
        for(int i = 1; i * i <= x; ++i) {
            if(x % i == 0) {
                if(i < x) {
                    sum += i;
                }
                if(i != x / i && x / i < x) {   //��Щ����ƽ������ƽ����ֻ�ܱ�����һ��
                    sum += x / i;               //����x��36�� ƽ����6ֻ�ܼ���һ��
                }
            }
        }
        if(sum == x) {
            cout << x << " is perfect" << endl;
        } else {
            cout << x << " is not perfect" << endl;
        }
    }
}
