#include <bits/stdc++.h>
using namespace std;
#define rep(n) for (int i = 0; i < (n); ++i)
using ll = long long;
int main()
{
    int n , cnt=0 ,num, ans=0;
    cin>>n;
   int a[n];
   rep(n) cin>>a[i];
   sort(a,a+n);
   for(int i=2 ;i<=a[n-1];++i){ //2 3 4 5 6 7
        cnt=0;
        for(int j=0 ; j<n;++j) //3 12 7
        {
            if(a[j]%i==0)
                cnt++;
        }
        if(cnt>ans){
            ans=cnt;
            num=i;
        }
   }
   cout<<num;

}
