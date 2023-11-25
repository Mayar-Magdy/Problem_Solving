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
        int w, a, b;
        cin >> w >> a >> b;
        bool flag = ((a <= b && b <= w + a) || (a <= w + b && w + b <= w + a));
        cout << (flag ? 0 : min(min(abs(a - b), abs(a - (b + w))), min(abs((a + w) - b), abs((a + w) - (b + w)))));

    }
}



