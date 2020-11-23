#include<bits/stdc++.h>
using namespace std;



int lcm(int a, int b) {
    if(a > b) {
        swap(a, b);
    }
    int i;
    for(i = b; i <= a * b; ++i) {
        if(i % a == 0 && i % b == 0) {
            break;
        }
    }
    return i;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
}
