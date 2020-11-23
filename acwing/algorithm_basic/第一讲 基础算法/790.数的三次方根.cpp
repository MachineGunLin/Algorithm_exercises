#include<bits/stdc++.h>
using namespace std;

int main() {
    double n;
    scanf("%lf", &n);
    double l = -100, r = 100;
    while(r - l >= 1e-8) {
        double mid = (l + r) / 2.0;
        if(mid * mid * mid < n) {
            l = mid;
        } else {
            r = mid;
        }
    }
    printf("%.6lf\n", l);
    return 0;
}
