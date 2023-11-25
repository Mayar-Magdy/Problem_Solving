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
        string s;
        cin >> s;
        int l, r;
        bool flag1 = 0, flag2 = 0;
        for (int i = 0, j = sz(s) - 1; i < sz(s); ++i, --j) {
            if (!flag1 && s[i] == 'A') l = i, flag1 = 1;
            if (!flag2 && s[j] == 'Z') r = j, flag2 = 1;
        }

        cout << (r - l) + 1;
    }

}
