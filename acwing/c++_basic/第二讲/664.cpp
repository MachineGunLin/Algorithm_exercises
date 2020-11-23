#include<bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    if(a >= b + c || b >= a + c || c >= a + b) {
        printf("Area = %.1lf", 1 / 2.0 * (a + b) * c);
    } else {
        printf("Perimetro = %.1lf", a + b + c);
    }
}
