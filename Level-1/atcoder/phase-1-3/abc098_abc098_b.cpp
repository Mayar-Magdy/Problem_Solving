#include <bits/stdc++.h>
using namespace std;
#define _Mayar_                      \
                 ios_base::sync_with_stdio(0); \
                 cin.tie(0);                   \
                 cout.tie(0);
typedef long long ll;
int com[26]={0};
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
        set<char> s1, s2;
        int mn = 27 ,cut,nsz=0;
        int ans = 0;
        for (int i = 0; i < s.size() - 1; ++i) {
            for (int j = 0; j <= i; ++j)
                s1.insert(s[j]);

            for (int k = i + 1; k < s.size(); ++k)
                s2.insert(s[k]);

            int dif = abs(int(s1.size()) - int(s2.size()));

            if (mn > dif) {
                if ((int) s1.size()>nsz) {
//Find the largest possible number of different letters contained in both s1 ,s2
                    mn = dif;
                    cut = i;
                    nsz = (int)s1.size();
                }
            }
            s1.clear(), s2.clear();
        }
        for(int i=0;i<=cut;++i)
            if(!com[s[i]-'a']) com[s[i]-'a']++;
        for(int i=cut+1;i<s.size();++i)
            if(com[s[i]-'a']) ans++, com[s[i]-'a']=0;
        cout << ans;
    }

}