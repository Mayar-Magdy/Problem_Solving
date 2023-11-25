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
        //Mask_problem
        int n, m;
        cin >> n >> m;
        char a[n][n], b[m][m];
        // a
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> a[i][j];
        // b
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < m; ++j)
                cin >> b[i][j];

        int i, j, ci = 0, cj = 0, cnt = 0;
        bool flag = 0;
        for (int io = 0; io < n; ++io) {
            for (int jo = 0; jo < n; ++jo) {
                // all of a
                ci = 0, i = io, j = jo;
                for (int g = 0; ci < m && i < n; ++g, ++i) {
                    cj = 0, j = jo;
                    for (int h = 0; cj < m && j < n; ++h, ++j) {
                        // all of b
                        cj++;
                        if (a[i][j] == b[g][h]) cnt++;

                    }
                    ci++;
                }
                // end b
                if (cnt == m * m) flag = 1;
                cnt = 0;
            }
        }
        cout << (flag ? "Yes" : "No");
    }
}



