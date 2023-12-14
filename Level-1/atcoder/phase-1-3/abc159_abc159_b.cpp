#include <bits/stdc++.h>
using namespace std;
int ispalindrome(string s){
    for(int i=0; i<s.size()/2;++i)
    if(s[i]!=s[(s.size()-1)-i]) return 0;
  return 1;
}
int main()
{
string s;
cin>>s;
int len = s.size();
cout<<(ispalindrome(s)&&ispalindrome(s.substr(0, (len-1)/2))&&ispalindrome(s.substr(((len+3)/2)-1))? "Yes" : "No");
}