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


        string o, e;
        cin >> o >> e;
        for (int i = 0; i < sz(o) + sz(e); ++i) // 0 1 2 3
        {
            if (!(i % 2) && (i / 2) < sz(o)) cout << o[i / 2];
            if (   i % 2 && (i / 2) < sz(e)) cout << e[i / 2];
        }
        // or print till min len , then check if the other len if it more than min just print the last char in it.
        // due to ∣O∣−∣E∣ is either 0 or 1.
    }
}



