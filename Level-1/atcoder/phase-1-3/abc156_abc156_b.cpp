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
        int n , k, DigitCnt=0; // n base k
        cin >> n>>k;
        while(n>0){
            n/=k;
            DigitCnt++;
        }
        cout<<DigitCnt;

    }
}