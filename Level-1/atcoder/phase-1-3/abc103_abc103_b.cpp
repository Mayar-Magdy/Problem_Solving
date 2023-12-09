#include <bits/stdc++.h>

using namespace std;
#define _Mayar_                      \
                 ios_base::sync_with_stdio(0); \
                 cin.tie(0);                   \
                 cout.tie(0);
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    _Mayar_
    int tc = 1;
//    cin >> tc;
    while (tc--) {
        string s, t, temp;
        cin >> s >> t;
        bool f = 0;
        int cnt = s.size();
        while (cnt--) {
            s = s[s.size() - 1] + s;
            s.pop_back();
            if (s == t) {
                f = 1;
                break;
            }
        }
        cout << (f ? "Yes" : "No");

    }

}