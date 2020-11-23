#include<bits/stdc++.h>
using namespace std;

int main() {
    int L;
    char ch;
    vector<vector<double> > M(12, vector<double>(12));
    cin >> L >> ch;
    double avgOrSum = 0;
    for(int i = 0; i < 12; ++i) {
        if(i == L) {
            for(int j = 0; j < 12; ++j) {
                cin >> M[i][j];
                avgOrSum += M[i][j];
            }
        } else {
            for(int j = 0; j < 12; ++j) {
                cin >> M[i][j];
            }
        }
    }
    if(ch == 'S') {
        printf("%.1lf\n", avgOrSum);
    } else {
        printf("%.1lf\n", avgOrSum / 12);
    }
}
