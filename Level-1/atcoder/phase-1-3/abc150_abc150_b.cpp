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
        string s;
        cin >> n >> s;
        int cnt = 0;
        while (s.find("ABC") != -1) {
            s[s.find("ABC")] = 'Z';
            cnt++;
        }
        cout << cnt;

    }

}