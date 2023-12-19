#include <bits/stdc++.h>
using namespace std;
#define rep(n) for (int i = 0; i < (n); ++i)
using ll = long long;
int main()
{
cout << fixed << setprecision(15);
int n;
cin>>n;
ll a[n];
rep(n) cin>>a[i];
ll Manhattan=0  ,Chebyshev=a[0] , Euclidian=0;

rep(n){
    Manhattan+=abs(a[i]);
    Euclidian+=(a[i]*a[i]);
    Chebyshev= max(Chebyshev,abs(a[i]));

}
cout<<Manhattan<<"\n"<<sqrt(Euclidian)<<"\n"<<Chebyshev <<"\n";
}
