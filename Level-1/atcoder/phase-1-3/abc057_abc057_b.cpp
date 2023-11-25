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
        pair<int, int> s[n], p[m];
        for (int i = 0; i < n; ++i) cin >> s[i].first >> s[i].second;
        for (int i = 0; i < m; ++i) cin >> p[i].first >> p[i].second;
        pair<int, int> mn(INT_MAX, 0);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (mn.first > abs(s[i].first - p[j].first) + abs(s[i].second - p[j].second))
                    mn.first = abs(s[i].first - p[j].first) + abs(s[i].second - p[j].second), mn.second = j + 1;
            }
            cout << mn.second << "\n";
            mn = make_pair(INT_MAX, 0);
        }
    }
}



