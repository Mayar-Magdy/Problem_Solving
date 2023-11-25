//
// Created by mai on 11/17/2023.
//
#include <bits/stdc++.h>

using namespace std;
#define _Mayar_                      \
                 ios_base::sync_with_stdio(0); \
                 cin.tie(0);                   \
                 cout.tie(0);
typedef long long ll;
int found[10];
int n, k;

bool ok(int num) {
    int temp = num;
    bool f = 1;
    while (f && temp) {
        if (found[temp % 10]) f = 0;
        temp /= 10;
    }
    return f && num >= n;
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
        cin >> n >> k;
        for (int i = 0; i < k; ++i) {
            int d;
            cin >> d;
            found[d] = 1;
        }
        for (int i = n; ; ++i)
            if (ok(i)) {
                cout <<i;
                break;
            }


    }
//        int l = n, r = 10000, mid, ans;
//        while (l <= r) {
//            mid = (l + r) / 2;
//            if (ok(mid)) {
//                ans = mid;
//                cout<<ans<<" ";
//               l = mid +1;
//            } else {
//                r= mid - 1;
//            }
//
//        }
//        cout << ans;
//
//    }

}