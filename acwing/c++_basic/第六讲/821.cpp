#include<bits/stdc++.h>
using namespace std;

int methods(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return methods(n - 1) + methods(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << methods(n) << endl;
}
