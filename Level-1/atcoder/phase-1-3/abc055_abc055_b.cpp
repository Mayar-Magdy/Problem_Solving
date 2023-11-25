#include <bits/stdc++.h>

using namespace std;
#define _Mayar_                      \
                 ios_base::sync_with_stdio(0); \
                 cin.tie(0);                   \
                 cout.tie(0);
typedef long long ll;
#define sz(x) int(x.size())

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    _Mayar_
    int tc = 1;
//    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        ll a[10 ^ 7] = {};
        a[0] = 1;
        for (ll i = 1; i < n; ++i) {
            a[i] = a[i - 1] * (i + 1);
        }
        cout << a[n - 1] % (10000000000 + 7);
    }
}



