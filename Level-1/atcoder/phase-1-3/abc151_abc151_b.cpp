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
        int n, limit, avg, sum = 0;
        cin >> n >> limit >> avg;
        for (int i = 0; i < n - 1; ++i) {
            int a;
            cin >> a;
            sum += a;
        }
        int last = avg * n - sum;
        if (last < 0) cout << 0;
        else if (last > limit) cout << -1;
        else cout << last;


    }

}