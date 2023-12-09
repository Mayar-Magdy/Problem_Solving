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
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<int> a(n), b(m), ans;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (x < a[i] && a[i] <= y) ans.push_back(a[i]);
        }
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
            if (x < b[i] && b[i] <= y)
                ans.push_back(b[i]);
        }
        bool f = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (auto i: ans)
            if (a[a.size() - 1] < i && b[0] >= i) {
                f = 1;
                break;
            }
        cout << (f ? "No War" : "War");


    }

}