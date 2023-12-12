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
        ll n ,ans ;
        double a,t, x, mn_dif=100000,cur;
        cin>>n>>t>>a;

        for(int i=0; i<n;++i)
        {
            cin>>x;
            cur=abs(a-(t-(x/1000*6)));
            if(cur<mn_dif)
                ans=i+1 , mn_dif=cur;
        }
        cout<<ans;
    }

}