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
        int n, m, x, costL = 0, costR = 0;
        cin >> n >> m >> x;
        int a[n];
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
            if (a[i] > x && a[i] < n) costL++;
            if (a[i] < x) costR++;
        }

        cout << min(costR, costL);
    }
}

