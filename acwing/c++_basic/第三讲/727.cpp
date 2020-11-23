#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sx = n / 2, sy = n / 2;

    for (int i = 0; i < n ; i ++ )
    {
        for (int j = 0; j < n; j ++ )
        {
            if ( abs(sx - i) + abs(sy - j) <= n / 2 ) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}
