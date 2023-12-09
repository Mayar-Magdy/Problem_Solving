#include <bits/stdc++.h>

using namespace std;
#define _Mayar_                      \
                 ios_base::sync_with_stdio(0); \
                 cin.tie(0);                   \
                 cout.tie(0);
typedef long long ll;
int rows[101], cols[101];

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
        map<string, int> vs;
        vector<string> vv;
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            vs.insert({s, 0});
            vv.push_back(s);
        }
        string temp = vv[0];
        bool f = 1;
        if (vs.size() != n) f = 0;
        else {
            for (int i = 1; i < n; ++i) {
                if (vv[i][0] != temp[temp.size() - 1]) {
                    f = 0;
                    break;
                }
                temp = vv[i];
            }
        }
        cout << (f ? "Yes" : "No");


    }
}