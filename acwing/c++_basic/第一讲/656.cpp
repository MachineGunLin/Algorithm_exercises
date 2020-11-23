#include<bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin >> n;
    int m = (int)(n * 100);
    double a[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    int ans[12] = {0};
    for (int i = 0; i < 12; i++) {
        int cnt = 0;
        while (m >= a[i]) {
            m -= a[i];
            cnt++;
        }
        ans[i] = cnt;
    }
    puts("NOTAS:");
    for (int i = 0; i < 6; i++)
        printf("%d nota(s) de R$ %.2lf\n", ans[i], (double)a[i] / 100);
    puts("MOEDAS:");
    for (int i = 6; i < 12; i++)
        printf("%d moeda(s) de R$ %.2lf\n", ans[i], (double)a[i] / 100);
}
