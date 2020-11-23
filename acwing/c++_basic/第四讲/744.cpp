#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<double> > M(12, vector<double>(12));
    int col;
    char s;
    double avgOrSum = 0;
    cin >> col >> s;
    for(int i = 0; i < 12; ++i) {
        for(int j = 0; j < 12; ++j) {
            cin >> M[i][j];
            if(j == col) {
                avgOrSum += M[i][j];
            }
        }
    }
    if(s == 'S') {
        printf("%.1lf\n", avgOrSum);
    } else {
        printf("%.1lf\n", avgOrSum / 12);
    }
}
