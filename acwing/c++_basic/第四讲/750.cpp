#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<double> > M(12, vector<double>(12));
    double avgOrSum = 0;
    char ch;
    cin >> ch;
    for(int i = 0; i < 12; ++i) {
        for(int j = 0; j < 12; ++j) {
            cin >> M[i][j];
            if(i > 6 && i + j > 11 && i > j) {
                avgOrSum += M[i][j];
            }
        }
    }
    if(ch == 'S') {
        printf("%.1lf\n", avgOrSum);
    } else {
        printf("%.1lf\n", avgOrSum / 30);
    }
}
