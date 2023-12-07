#include <bits/stdc++.h>

using namespace std;
#define _Mayar_                      \
                 ios_base::sync_with_stdio(0); \
                 cin.tie(0);                   \
                 cout.tie(0);
typedef long long ll;

bool ispalindromic(string n) {
    for (int i = 0; i < n.size() / 2; ++i)
        if (n[i] != n[n.size() - 1 - i]) return 0;
    return 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    _Mayar_
    int tc = 1;
//    cin >> tc;
    while (tc--) {
        int a, b, k;
        cin >> a >> b >> k;
        for (int i = 0; i < k && a <= b; ++i) cout << a++ << "\n";
        a--;
        if (k <= b) {
            int c = (b - k) + 1;
            while (c <= a) c++;
            for (int i = 0; i < k && c <= b; ++i) cout << c++ << "\n";
        }

    }
}

