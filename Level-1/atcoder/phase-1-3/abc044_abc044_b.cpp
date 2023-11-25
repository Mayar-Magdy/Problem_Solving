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
        int fre[26] = {};
        for (int i = 0; i < sz(s); ++i)
            fre[s[i] - 'a']++;

        bool flag = 1;
        for (int i = 0; i < 26; ++i)
            if (fre[i] % 2) {
                flag = 0;
                break;
            }

        cout << (flag ? "Yes" : "No");


    }

}
