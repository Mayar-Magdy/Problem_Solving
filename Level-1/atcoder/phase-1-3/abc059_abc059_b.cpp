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
        string a, b;
        cin >> a >> b;
        int len_a = sz(a), len_b = sz(b);
        if (len_a == len_b) {
            bool f = 1;
            auto i = 0;
            while (f && i < len_a) {
                if (a[i] - '0' > b[i] - '0') {
                    cout << "GREATER";
                    f = 0;
                } else if (a[i] - '0' < b[i] - '0') {
                    cout << "LESS";
                    f = 0;
                }
                ++i;
            }
            if (f) cout << "EQUAL";

        } else cout << (len_a > len_b ? "GREATER" : "LESS");
    }

}



