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
        int n, t;
        cin >> n >> t;
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            int ti, ci;
            cin >> ci >> ti;
            if (ti <= t)v.push_back(ci);
        }
        sort(v.begin(), v.end());
        if (!v.empty()) cout << v[0];
        else cout << "TLE";


    }

}