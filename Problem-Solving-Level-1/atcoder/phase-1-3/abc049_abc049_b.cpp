#include <bits/stdc++.h>

using namespace std;
#define _Mayar_                      \
                 ios_base::sync_with_stdio(0); \
                 cin.tie(0);                   \
                 cout.tie(0);
typedef long long ll;
#define sz(x) int(x.size())

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    _Mayar_
    int tc = 1;
//    cin >> tc;
    while (tc--) {
        int h, w;
        cin >> h >> w;
        char a[h][w];
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                cin >> a[i][j];
            }
        }
//        for (int i = 0; i < h; ++i) {
//            for (int j = 0; j < w; ++j)
//                cout << a[i][j];
//            cout << "\n";
//            for (int j = 0; j < w; ++j)
//                cout << a[i][j];
//            cout << "\n";
//        }

        for(int i=0;i<2*h;i++){
            for(int j=0;j<w;j++){
                cout<<a[i/2][j];
            }
            cout<<endl;
        }
    }

}
