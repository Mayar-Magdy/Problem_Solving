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
        string s;
        cin >> s;
        int n;
        int ans=642;
        for (int i = 0; i < s.size() - 2; ++i) {
            n = s[i] - '0';
            n *= 10;
            n += s[i + 1] - '0';
            n *= 10;
            n += s[i + 2] - '0';
            ans=min(ans,abs(n - 753));
        }
        cout << ans;
    }

}