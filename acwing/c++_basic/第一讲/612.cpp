#include<bits/stdc++.h>
using namespace std;
const double PI = 3.14159;

int main() {
    int R;
    scanf("%d", &R);
    printf("VOLUME = %.3lf", (4 / 3.0) * PI * pow(R, 3));       //有些语言中(4/3)无法得到1.3333…，建议在公式中使用(4/3.0)。
}
