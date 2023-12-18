#include <bits/stdc++.h>
using namespace std;
#define rep(n) for (int i = 0; i < n; ++i)
using ll = long long;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> pv(n);
    for(int i=0 ; i<n;++i)
        cin>>pv[i].first>>pv[i].second;
    for(int i=0 ; i<n-2;++i)
       {
           if(pv[i].first==pv[i].second &&pv[i+1].first==pv[i+1].second &&pv[i+2].first==pv[i+2].second ) {
            cout<<"Yes";
            return 0;
           }
       }

cout<<"No";
return 0;
    }
