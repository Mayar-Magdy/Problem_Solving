#include <bits/stdc++.h>

using namespace std;
#define _Mayar_                      \
                 ios_base::sync_with_stdio(0); \
                 cin.tie(0);                   \
                 cout.tie(0);
typedef long long ll;
int rows[101], cols[101];

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    _Mayar_
    int tc = 1;
//    cin >> tc;
    while (tc--) {
        int h, w;
        cin >> h >> w;
        char a[h][w];
        for (int i = 0; i < h; ++i)
            for (int j = 0; j < w; ++j)
                cin >> a[i][j];
        //rowwws
        for (int i = 0; i < h; ++i) {
            int cnt = 0;
            for (int j = 0; j < w; ++j)
                cnt += (a[i][j] == '.');
            if (cnt == w) rows[i] = 1;

        }
        //cols
        for (int i = 0; i < w; ++i) {
            int cnt = 0;
            for (int j = 0; j < h; ++j)
                cnt += (a[j][i] == '.');
            if (cnt == h) cols[i] = 1;
        }

        for (int i = 0; i < h; ++i) {
            if (rows[i]) continue;
            for (int j = 0; j < w; ++j) {
                if (cols[j]) continue;
                cout << a[i][j];
            }
            cout << "\n";
        }

    }
}