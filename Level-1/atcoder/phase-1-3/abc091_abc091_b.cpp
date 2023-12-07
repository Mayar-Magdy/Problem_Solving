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
        map<string, int> mp;
        int a, b;
        cin >> a;
        for (int i = 0; i < a; ++i) {
            string s;
            cin >> s;
            if (mp[s]) mp[s]++;
            else mp[s]=1;
        }
        cin>>b;
        for (int i = 0; i < b; ++i) {
            string s;
            cin >> s;
            if (mp[s]) mp[s]--;
        }
        int mx=0;
        for(auto i=mp.begin() ; i!=mp.end();++i){
            mx = max(mx, i->second);
        }
        cout<<mx;



    }
}

