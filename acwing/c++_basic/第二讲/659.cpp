#include <bits/stdc++.h>
using namespace std;

int main() {
    double x;
    cin >>x;
    if(x>=0 && x<=100) {
        if( x<=25) printf("Intervalo [0,25]");
        else if(x<=50) printf("Intervalo (25,50]");
        else if(x<=75) printf("Intervalo (50,75]");
        else if(x<=100) printf("Intervalo (75,100]");
    }
    else printf("Fora de intervalo");
}
