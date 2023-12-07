#include <bits/stdc++.h>

using namespace std;
#define _Mayar_                      \
                 ios_base::sync_with_stdio(0); \
                 cin.tie(0);                   \
                 cout.tie(0);
typedef long long ll;
int found[10];
int n, k;

bool ok(int num) {
    int temp = num;
    bool f = 1;
    while (f && temp) {
        if (found[temp % 10]) f = 0;
        temp /= 10;
    }
    return f && num >= n;
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
        int n ;
        cin>>n;
        int a[n];
        for(int i=0 ; i<n;++i)
            cin>>a[i];
        sort(a,a+n);
        int sc=0;
        for(int i=n-1; i>=0;i-=2){
            if(i-1 >= 0 )sc+=a[i]-a[i-1];
            else sc+=a[i];
        }
        cout<<sc;

    }
}

