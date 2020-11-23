#include<bits/stdc++.h>
using namespace std;

class Tuple {
public:
    int x;
    double y;
    string z;
};

bool cmp(Tuple A, Tuple B) {
    return A.x < B.x;
}

int main() {
    int N;
    cin >> N;
    Tuple t[N];
    for(int i = 0; i < N; ++i) {
        cin >> t[i].x >> t[i].y >> t[i].z;
    }
    sort(t, t + N, cmp);
    for(int i = 0; i < N; ++i) {
        cout << t[i].x << ' ';
        printf("%.2lf ", t[i].y);
        cout << t[i].z << endl;
    }
}
