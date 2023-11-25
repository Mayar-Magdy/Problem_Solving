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
        int n, m;
        cin >> n;
        int a[n], sum = 0;
        for (int i = 0; i < n; ++i) cin >> a[i], sum += a[i];
        cin >> m;
        while (m--) {
            int ind, t;
            cin >> ind >> t;
            cout << (sum - a[ind - 1]) + t << "\n";

        }
    }

}
