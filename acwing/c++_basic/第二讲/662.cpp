#include<bits/stdc++.h>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    if(x == 0) {
        if(y == 0) {
            cout << "Origem" << endl;
            return 0;
        } else {
            cout << "Eixo Y" << endl;
            return 0;
        }
    }
    if(y == 0) {
        if(x == 0) {
            cout << "Origem" << endl;
            return 0;
        } else {
            cout << "Eixo X" << endl;
            return 0;
        }
    }
    if(x > 0) {
        if(y > 0) {
            cout << "Q1" << endl;
            return 0;
        } else {
            cout << "Q4" << endl;
            return 0;
        }
    } else {
        if(y > 0) {
            cout << "Q2" << endl;
            return 0;
        } else {
            cout << "Q3" << endl;
            return 0;
        }
    }
}
