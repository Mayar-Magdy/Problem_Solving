#include <bits/stdc++.h>
using namespace std;
#define rep(n) for (int i = 0; i < n; ++i)
using ll = long long;
int main()
{ string s;
cin>>s;
ll sum=0;
for (auto i :s ) sum+=(i-'0');
cout<<(sum%9==0?"Yes":"No");
    

    return 0;
    }
