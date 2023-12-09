#include <bits/stdc++.h>

using namespace std;
#define _Mayar_                      \
                 ios_base::sync_with_stdio(0); \
                 cin.tie(0);                   \
                 cout.tie(0);
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    _Mayar_
    int tc = 1;
//    cin >> tc;
    while (tc--) {
        int n, div, cnt = 0;
        cin >> n;
        for (int j = 1; j <= n; j += 2) { // 1 150
            div = 0;
            for (int i = 1; i <= j; ++i)
                div += (j % i == 0);
            cnt += (div == 8);

        }
        cout << cnt;
    }
}