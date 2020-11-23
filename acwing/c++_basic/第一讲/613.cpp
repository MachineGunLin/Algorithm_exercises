#include<bits/stdc++.h>
using namespace std;
const double PI = 3.14159;

int main() {
    double A, B, C;
    scanf("%lf%lf%lf", &A, &B, &C);
    printf("TRIANGULO: %.3lf\n", (1 / 2.0) * A * C);
    printf("CIRCULO: %.3lf\n", PI * pow(C, 2));
    printf("TRAPEZIO: %.3lf\n", (1 / 2.0) * (A + B) * C);
    printf("QUADRADO: %.3lf\n", pow(B, 2));
    printf("RETANGULO: %.3lf\n", A * B);
}
