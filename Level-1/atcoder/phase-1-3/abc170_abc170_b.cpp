#include <iostream>

using namespace std;

int main()
{
    int x , y, turtle ;
    cin>>x>>y;
    for(int crane=0 ; crane<=x;++crane)
    {
        turtle = x-crane;
        if(4*turtle + 2*crane == y) {cout<<"Yes" ; return 0;}
    }
    cout<<"No";
    return 0;
}
