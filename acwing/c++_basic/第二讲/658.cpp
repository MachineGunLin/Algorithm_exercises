#include<bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    if(pow(b, 2) - 4 * a * c < 0 || a == 0) {
        printf("Impossivel calcular\n");
        return 0;
    } else {
        double r1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        double r2 = (-b - sqrt(pow(b, 2) - 4 * a * c )) / (2 * a);
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
}
