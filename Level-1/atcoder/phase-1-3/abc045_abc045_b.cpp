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
        vector<string> vs(3);
        for (int i = 0; i < 3; ++i) cin >> vs[i];
        int next = (vs[0][0] - 'a');
        int ai = 0, bi = 0, ci = 0;


        while (true) {

            if (next == 0) {
                next = (vs[0][ai] - 'a');
                if (ai==sz(vs[0])){ cout << 'A'; return 0;}
                ai++;

            }
            if (next == 1) {
                next = (vs[1][bi] - 'a');
                if (bi==sz(vs[1])) {cout << 'B'; return 0;}
                bi++;


            }
            if (next == 2) {
                next = (vs[2][ci] - 'a');
                if (ci==sz(vs[2])){ cout << 'C'; return 0;}
                ci++;


            }

        }
    }

}
