#include <bits/stdc++.h>
using namespace std;
#define rep(n) for (int i = 0; i < n; ++i)
using ll = long long;
int main()
{ string s ,t;
cin>>s>>t;
int mn = t.size();
for( int i=0; i<=s.size()-t.size();++i)
{
    int dif=0;
    for(int j=0 ;j<t.size();++j)
       if(t[j]!=s[i+j]) dif++;
    mn = min(mn,dif);

}
cout<<mn;
return 0;
    }
