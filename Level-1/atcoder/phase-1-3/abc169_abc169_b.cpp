/*
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){

    int n;
    cin>>n;
     ll mul=1 , x;
    bool zero =0 , exc=0;
    for(int i=0;i<n;++i)
    {
        cin>>x;
        if(!x) zero=1;
        if (mul && x>(1000000000000000000/mul)) exc=1;
       else    mul*=x;

    }
if(zero) cout<<"0\n";
else if(exc) cout<<"-1\n";
else cout<<mul<<"\n";
*/
