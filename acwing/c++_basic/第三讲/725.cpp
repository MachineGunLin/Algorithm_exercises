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
                if(i != x / i && x / i < x) {   //有些数是平方数，平方根只能被计算一次
                    sum += x / i;               //比如x是36， 平方根6只能计算一次
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
