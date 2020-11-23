#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    getline(cin, a, '\n');
    int size = a.size();
    for(int i = 0; i < size; ++i) {
        char c = (char)(a[i] + a[(i + 1) % size]);
        b += c;
    }
    cout << b << endl;
}
