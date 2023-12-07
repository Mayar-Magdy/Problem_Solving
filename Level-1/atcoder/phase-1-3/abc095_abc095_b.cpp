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
        int n, x;
        cin >> n >> x;
        int a[n];
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (x >= a[i]) x -= a[i], cnt++;
        }
        if (x) {
            sort(a, a + n);
            cnt += x / a[0];
        }
        cout << cnt;
    }
}

