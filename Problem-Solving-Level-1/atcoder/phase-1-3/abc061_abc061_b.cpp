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
        cin >> n >> m;
        int fre[n+1] = {};
        for (int i = 0; i < m; ++i) {
            int a, b;
            cin >> a >> b;
            fre[a]++, fre[b]++;
        }
        for (int i = 1; i <= n; ++i) cout << fre[i] << "\n";


    }

}



