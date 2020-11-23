#include<bits/stdc++.h>
using namespace std;

int main() {
    double oldPay;
    scanf("%lf", &oldPay);
    double newPay, diff;
    int perc;
    if(oldPay <= 400.00) {
        perc = 15;
    } else if(oldPay <= 800.00) {
        perc = 12;
    } else if(oldPay <= 1200.00) {
        perc = 10;
    } else if(oldPay <= 2000.00) {
        perc = 7;
    } else {
        perc = 4;
    }
    diff = oldPay * (perc / 100.0);
    newPay = oldPay + diff;
    printf("Novo salario: %.2lf\n", newPay);
    printf("Reajuste ganho: %.2lf\n", diff);
    printf("Em percentual: %d", perc);
    cout << " " << "%" << endl;
}
