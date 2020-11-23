#include<bits/stdc++.h>
using namespace std;

int main() {
    int M, N;
    while(cin >> M >> N) {
        int sum = 0;
        if(M <= 0 || N <= 0) {
            break;
        }
        if(M > N) {
            swap(M, N);
        }
        for(int i = M; i <= N; ++i) {
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;
    }
}
