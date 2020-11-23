#include<bits/stdc++.h>
using namespace std;
int weighA = 2, weighB = 3, weighC = 5;

int main() {
    double A, B, C;
    scanf("%lf%lf%lf", &A, &B, &C);
    printf("MEDIA = %.1lf", (weighA * A + weighB * B + weighC * C) / (weighA + weighB + weighC));
}
