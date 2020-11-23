#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, x;
    cin >> N;
    while(N--) {
        cin >> x;
        bool flag = true;
        for(int i = 2; i * i <= x; ++i) {
            if(x % i == 0) {
                flag = false;
                break;
            }
        }
        if(flag == false) {
            cout << x << " is not prime" << endl;
        } else {
            cout << x << " is prime" << endl;
        }
    }
}
