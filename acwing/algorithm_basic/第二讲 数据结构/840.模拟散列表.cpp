///*
//拉链法
//*/
//#include<bits/stdc++.h>
//using namespace std;
//
//const int N = 1e5 + 3;
//int h[N], e[N], ne[N];
//int idx;
//
//void insert(int x) {
//    int k = (x % N + N) % N;
//    e[idx] = x;
//    ne[idx] = h[k];
//    h[k] = idx++;
//}
//
//bool find(int x) {
//    int k =  (x % N + N) % N;
//    for(int i = h[k]; i != -1; i = ne[i]) {
//        if(e[i] == x) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    memset(h, -1, sizeof h);
//    int n;
//    scanf("%d", &n);
//    char op[2];
//    int key;
//    while(n--) {
//        scanf("%s%d", op, &key);
//        if(*op == 'I') {
//            insert(key);
//        } else {
//            if(find(key) == true) {
//                printf("Yes\n");
//            } else {
//                printf("No\n");
//            }
//        }
//    }
//    return 0;
//}


/*
开放寻址法
*/


#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 3;
const int null = 0x3f3f3f3f;

int h[N];

int find(int x) {
    int k = (x % N + N) % N;
    while(h[k] != null && h[k] != x) {
        ++k;
        if(k == N) {
            k = 0;
        }
    }
    return k;
}

int main() {
    memset(h, 0x3f, sizeof h);
    int n;
    scanf("%d", &n);
    while(n--) {
        char op[2];
        int key;
        scanf("%s%d", op, &key);
        if(*op == 'I') {
            h[find(key)] = key;
        } else {
            if(h[find(key)] != null) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }
    }
    return 0;
}
