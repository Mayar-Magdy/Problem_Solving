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
        bool f = 1;
        if (s[0] != 'A') f = 0;
        int cnt = 0;
        for (int i = 1; i < s.size(); ++i) {
            if (isupper(s[i])) {
                if (i == 1 || i == s.size() - 1 || s[i] != 'C') f = 0;
                else cnt++;
            }
        }
        if (cnt != 1) f = 0;
        cout << (f ? "AC" : "WA");


    }

}