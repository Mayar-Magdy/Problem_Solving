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
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; ++i)cin >> a[i], sum += a[i];
        sort(a, a + n);
        sum -= a[n - 1] / 2;
        cout << sum;

    }

}