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
//solution 1
//        int n, l;
//        cin >> n >> l;
//        vector<string> vs(n);
//        for (int i = 0; i < n; ++i) cin >> vs[i];
//        sort(vs.begin(), vs.end());
//        for (int i = 0; i < n; ++i) cout << vs[i];


/*.......................................................................................................................................................................................................*/

//solution 2
        int n, l;
        cin >> n >> l;
        vector<string> vs(n);
        for (int i = 0; i < n; ++i) cin >> vs[i];
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                bool found = 0, f = 0;
                // found will be used in case strings with diff size like  aaa , aa
                for (int it = 0; it < l; ++it) {
                    if (vs[i][it] < vs[j][it]) {
                        f = 0, found = 1;
                        break;
                    }
                    if (vs[i][it] > vs[j][it]) {
                        f = 1, found = 1;
                        break;
                    }

                }
                if (f) swap(vs[i], vs[j]);
            }

        }

        for (int i = 0; i < n; ++i) cout << vs[i];


    }

}
