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
        vector<int> v;
        int a, b;
        cin >> a >> b;
        int s = b - a;
        cout << (s * (s + 1) / 2) - b;
    }

}