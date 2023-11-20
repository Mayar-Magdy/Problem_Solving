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
        int k, s;
        cin >> k >> s;
        int cnt = 0;
        for (int x = 0; x <= k; ++x)  //k^2
            for (int y = 0; y <= k; ++y) { //x+y+z=s
                int z = s - (x + y);
                if (z >= 0 && z <= k) cnt++;
            }
        cout << cnt;
    }

}
