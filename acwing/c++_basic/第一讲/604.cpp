#include<bits/stdc++.h>
using namespace std;
const double PI = 3.14159;      //这题用float过不了，精度不够，要用double

int main() {
        double r;               //半径也得是double类型
        scanf("%lf", &r);
        printf("A=%.4lf", PI * r * r);
}
