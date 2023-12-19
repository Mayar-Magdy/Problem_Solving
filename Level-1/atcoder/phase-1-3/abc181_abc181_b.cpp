#include <bits/stdc++.h>
using namespace std;
#define rep(n) for (int i = 0; i < (n); ++i)
using ll = long long;
int pre[1000000];
int main()
{
int n , a, b , mn =1000005, mx=0;
ll  sum=0;
cin>>n;
rep(n) {
    cin>>a>>b;
    pre[a] +=1;
    pre[b+1]+=-1;
    mn=min(mn,a);
    mx=max(mx,b);
}
for(int i=mn ; i<=mx;++i)
    pre[i+1]+=pre[i];

for(ll i=mn ; i<=mx;++i) if(pre[i])sum+=i*pre[i]; 
cout<<sum;
}
