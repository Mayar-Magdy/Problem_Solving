#include <bits/stdc++.h>
using namespace std;
#define rep(n) for (int i = 0; i < (n); ++i)
using ll = long long;
int main()
{
    string s;
    int n , p;
    cin>>n>>p>>s;
    for(auto i : s){
        if(i=='o') p++;
        else{
            if(p>0)p--;
        }
    }
cout<<p;
}
