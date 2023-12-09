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
        for (int i = 0; i <= 50; ++i)
            for (int j = 0; j <= 50; ++j) {
                if (4 * i + 7 * j == n) {
                    cout << "Yes";
                    return 0;
                }
            }

        cout << "No";
//
//        bool ans = 0;
//        if (n % 4 == 0) ans = 1;
//        else if (n % 7 == 0)ans = 1;
//        else if (n % 11 == 0)ans = 1;
//        else {
//            //wrong
//            int temp = n;
//            bool f = 1, f1 = 1;
//            while (temp && f) {
//                while (temp - 7 >= 4)temp -= 7;
//                if (temp % 4 == 0) temp = 0;
//                else f = 0;
//            }
//            if (!temp) ans = 1;
//            int temp1 = n;
//            while (temp1 && f1) {
//                while (temp1 - 4 >= 7)temp1 -= 4;
//                if (temp1 % 7 == 0) temp1 = 0;
//                else f1 = 0;
//            }
//            if (!temp1) ans = 1;
//        }
//        cout << (ans ? "Yes" : "No");
    }
}