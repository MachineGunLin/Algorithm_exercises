#include<bits/stdc++.h>
using namespace std;
const double weighA = 3.5, weighB = 7.5;        //这题用float过不了，要用double

int main() {
    double A, B;
    scanf("%lf%lf", &A, &B);
    printf("MEDIA = %.5lf", (A * weighA + B * weighB) / (weighA + weighB));
}
