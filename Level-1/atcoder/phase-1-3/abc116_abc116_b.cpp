#include <bits/stdc++.h>

using namespace std;
#define _Mayar_                      \
                 ios_base::sync_with_stdio(0); \
                 cin.tie(0);                   \
                 cout.tie(0);
typedef long long ll;
vector<int> a(1000000);

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    _Mayar_
    int tc = 1;
//    cin >> tc;
    while (tc--) {
        int s;
        cin >> s;
        for (int i = 0;; ++i) {
            if (a[s]) {
                cout << i + 1;
                break;
            }
            else a[s] = 1;
            if (s % 2 == 0) s /= 2;
            else s = 3 * s + 1;
        }

    }

}