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
        int r, g, b;
        cin >> r >> g >> b;
        int i = 0;
        for (; (r + g + b) > 0; ++i) {
            if (!(i % 3)) if (r >= 2)r -= 2;   else if (r) r--;
            if (i % 3 == 1) if (g >= 2)g -= 2; else if (g) g--;
            if (i % 3 == 2) if (b >= 2)b -= 2; else if (b) b--;
        }
        cout << 30 + (i - 1);

    }


}