#include <bits/stdc++.h>

using namespace std;
#define _Mayar_                      \
                 ios_base::sync_with_stdio(0); \
                 cin.tie(0);                   \
                 cout.tie(0);
typedef long long ll;
int found[10];
int n, k;

bool ok(int num) {
    int temp = num;
    bool f = 1;
    while (f && temp) {
        if (found[temp % 10]) f = 0;
        temp /= 10;
    }
    return f && num >= n;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    _Mayar_
    int tc = 1;
//    cin >> tc;
    while (tc--) {
        int a, b;
        cin >> a >> b;
        int conb = (b / 10);
        if (conb != 10 && conb > 0) a *= 100;
        else if (conb == 10) a *= 1000;
        else a *= 10;
        a += b;
        bool f = 0;
        // o(sqrt(a)

        for (float i = 2; i * i <= a; ++i) {
            if ((a / i) == i) {
                f = 1;
                break;
            }
        }
        cout << (f ? "Yes" : "No");

    }
}