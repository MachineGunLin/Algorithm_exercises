#include<bits/stdc++.h>
using namespace std;

int main() {
    int time;
    scanf("%d", &time);
    printf("%d:%d:%d", time / 3600, (time % 3600) / 60, time % 60);
}
